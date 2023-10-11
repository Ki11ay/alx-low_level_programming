#include "function_pointers.h"

/**
 *int_index - a function that searches for an integer
 *@array: the array of integers
 *@size: the size of array
 *@cmp: the function used for comparing
 *Return: the index of the integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int o = 0;

	if (array && size && cmp)
		while (o < size)
		{
			if (cmp(array[o]))
				return (o);
			o++;
		}
	return (-1);
}
