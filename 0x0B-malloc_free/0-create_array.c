#include "main.h"
#include <stdlib.h>

/**
 * create_array -a function that creates an array of chars starting with specific
 * @size: the size of the array the code prints
 * @c: the starting char
 * Return: a pointer to the array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		arr[j] = c;

	return (arr);
}
