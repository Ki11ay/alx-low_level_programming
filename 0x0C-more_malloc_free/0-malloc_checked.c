#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: input integer
 * Return: a pointer to result
 */
void *malloc_checked(unsigned int b)
{
	int *e = malloc(b);

	if (e == NULL)
		exit(98);
	return (e);

}
