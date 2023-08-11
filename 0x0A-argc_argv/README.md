# Beginner's Guide to Using Command-Line Arguments and Main Function in C

Welcome to the Beginner's Guide to C Programming! This README will help you understand some essential concepts like using command-line arguments, the main function's prototypes, and handling unused variables or parameters.

## Command-Line Arguments

When you run a C program from the command line, you can pass extra information called "arguments." These arguments provide input to your program. For example, if your program is named `my_program`, you can run it like this:

```bash
./my_program argument1 argument2 argument3
```

Inside your program, these arguments can be accessed using the `argc` and `argv` parameters of the `main()` function.

- `argc`: This is an integer that holds the count of arguments passed to the program.
- `argv`: This is an array of strings that holds the actual argument values.

## Main Function Prototypes

There are two common prototypes for the `main()` function in C:

1. `int main(void)`: This version doesn't take any arguments. You can use it when your program doesn't need any command-line arguments.

2. `int main(int argc, char *argv[])`: This version takes two arguments. The `argc` parameter is the argument count, and `argv` is an array of strings containing the arguments. You should use this when your program expects command-line input.

Choose the appropriate prototype based on whether you need to use command-line arguments or not.

## Handling Unused Variables or Parameters

Sometimes, you might declare variables or function parameters that you don't end up using in your code. To prevent compiler warnings, you can use the `__attribute__((unused))` or `(void)` technique.

- `__attribute__((unused))`: You can place this attribute after the variable's declaration to tell the compiler that it's intentionally unused. For example:

  ```c
  int unused_variable __attribute__((unused));
  ```

- `(void)`: If you have unused function parameters, you can cast them to `(void)` to signal to the compiler that you're intentionally not using them. For example:

  ```c
  void unused_function(int parameter1, int parameter2) {
      (void)parameter1;
      (void)parameter2;
  }
  ```

By using these techniques, you prevent compiler warnings about unused variables or parameters.

That's it for this beginner's guide! Hopefully, you now have a clearer understanding of using command-line arguments, selecting the right `main()` function prototype, and handling unused variables or parameters in C programming. Happy coding! 🚀