#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function tht searches for an integer
 * @array: function array
 * @size: function size
 * @cmp: function that search for int
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
