#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (d = 0; b < (nmemb * size); d++)
		x[d] = 0;
	return (x);
}
