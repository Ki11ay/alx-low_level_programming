#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: allocated memory
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *e = malloc(b);

	if (e == NULL)
		exit(98);
	return (e);

}
