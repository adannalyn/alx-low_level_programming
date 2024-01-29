#include "function_pointers.h"

/**
 * array_iterator - function that executes as parameter of an array
 * @array: an array
 * @size: size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	void *arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		printf("%d",action(array[i]));
	}

	free(*array);
}
