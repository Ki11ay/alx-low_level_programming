#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: length of src we want to copy
 *Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
