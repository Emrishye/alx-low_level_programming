#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - performs operation on elements of arrray
 * @array: to be operated
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}

}
