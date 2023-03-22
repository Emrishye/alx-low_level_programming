#include "function_pointers.h"
/**
 * int_index - prints index of first element
 * @size: size of array
 * @cmp: pointer to a function
 * @array: points to array
 * Return: index of the element matched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = (*cmp)(array[i]);
		if (j != 0)
			return (i);
	}
	if (j == 0)
	return (-1);
	return (0);
}
