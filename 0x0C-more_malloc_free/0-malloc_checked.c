#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: allocated memory
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	i = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);

}
