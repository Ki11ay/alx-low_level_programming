#include "main.h"

/**
 *_strncat - function that concat. two strings
 *
 *@dest: pointer to destination input
 *@src: pointer to source input
 *@n: number of bytes from @src
 *
 *Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	a = 0;
	while (dest[a])
		a++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[a + i] = src[i];
	dest[a + i] = '\0';
	return (dest);
}
