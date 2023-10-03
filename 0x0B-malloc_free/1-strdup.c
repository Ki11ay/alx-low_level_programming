#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a input.
 * @str: a pointer to the source string
 * Return: returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	int j, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = (char *)malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
		dup[j] = str[j];
	dup[len] = '\0';

	return (dup);
}
