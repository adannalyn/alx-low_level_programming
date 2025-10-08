/* file: 101-keygen.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>

typedef struct {
    int target;            /* required byte-sum */
    int min_ch;            /* inclusive lower bound */
    int max_ch;            /* inclusive upper bound */
    unsigned int seed;     /* optional deterministic seed */
    int use_seed;
    int debug;
} options_t;

static long parse_long(const char *s, int *ok) {
    char *end = NULL;
    errno = 0;
    long v = strtol(s, &end, 0);
    *ok = (errno == 0 && end && *end == '\0');
    return v;
}

static void usage(const char *p) {
    fprintf(stderr,
        "Usage: %s [--target N] [--min N] [--max N] [--seed N] [--debug]\n"
        "Generates printable ASCII whose byte-sum equals N (default 2772).\n"
        "Run as: ./101-crackme \"$(%s --debug)\"\n", p, p);
}

static int parse_opts(int argc, char **argv, options_t *o) {
    int ok;
    *o = (options_t){ .target = 2772, .min_ch = 33, .max_ch = 126 };
    for (int i = 1; i < argc; ++i) {
        if      (strcmp(argv[i], "--debug")  == 0) o->debug = 1;
        else if (strcmp(argv[i], "--seed")   == 0 && ++i < argc) {
            long v = parse_long(argv[i], &ok);
            if (!ok || v < 0) { fprintf(stderr, "Bad --seed\n"); return 0; }
            o->seed = (unsigned int)v; o->use_seed = 1;
        } else if (strcmp(argv[i], "--target")== 0 && ++i < argc) {
            long v = parse_long(argv[i], &ok);
            if (!ok || v < 1) { fprintf(stderr, "Bad --target\n"); return 0; }
            o->target = (int)v;
        } else if (strcmp(argv[i], "--min")  == 0 && ++i < argc) {
            long v = parse_long(argv[i], &ok);
            if (!ok || v < 0 || v > 255) { fprintf(stderr, "Bad --min\n"); return 0; }
            o->min_ch = (int)v;
        } else if (strcmp(argv[i], "--max")  == 0 && ++i < argc) {
            long v = parse_long(argv[i], &ok);
            if (!ok || v < 0 || v > 255) { fprintf(stderr, "Bad --max\n"); return 0; }
            o->max_ch = (int)v;
        } else { usage(argv[0]); return 0; }
    }
    if (o->min_ch > o->max_ch) { fprintf(stderr, "min > max\n"); return 0; }
    if (o->target < o->min_ch) { fprintf(stderr, "target < min\n"); return 0; }
    return 1;
}

/* why: ensure remainder stays printable; avoids off-by-one failures */
static int keygen(char *out, size_t cap, size_t *len_out, const options_t *o) {
    const int T = o->target, MIN = o->min_ch, MAX = o->max_ch;
    int sum = 0; size_t n = 0;
    if (cap < 2) return 0;

    while ((T - sum) > MAX) {
        int c = MIN + (rand() % (MAX - MIN + 1));
        int cap_c = (T - MIN) - sum;
        if (c > cap_c) c = cap_c;              /* keep final remainder >= MIN */
        if (n >= cap - 2) return 0;            /* guard */
        out[n++] = (char)c;
        sum += c;
    }
    {   int last = T - sum;
        if (last < MIN || last > MAX) return 0;
        out[n++] = (char)last;
    }
    out[n] = '\0';
    *len_out = n;
    return 1;
}

int main(int argc, char **argv) {
    options_t opt;
    char pass[128];
    size_t n = 0;

    if (!parse_opts(argc, argv, &opt)) return 1;
    if (opt.use_seed) srand(opt.seed); else srand((unsigned int)time(NULL));

    if (!keygen(pass, sizeof(pass), &n, &opt)) {
        fprintf(stderr, "Generation failed (impossible constraints?)\n");
        return 1;
    }

    if (opt.debug) {
        long s = 0; for (size_t i = 0; i < n; ++i) s += (unsigned char)pass[i];
        fprintf(stderr, "[debug] len=%zu sum=%ld target=%d range=[%d,%d]\n",
                n, s, opt.target, opt.min_ch, opt.max_ch);
    }

    if (fwrite(pass, 1, n, stdout) != n) return 1; /* no newline */
    return 0;
}
