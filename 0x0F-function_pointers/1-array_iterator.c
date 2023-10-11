#include "function_pointers.h"

/**
 *array_iterator - executes given as a parameter on each element of an array
 *@array: input array of integers
 *@size: the size of the array
 *@action: the function pointer
 *Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *g = array + size - 1;

	if (array && size && action)
		while (array <= g)
			action(*array++);
}
