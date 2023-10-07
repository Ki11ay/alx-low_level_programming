#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 *@s: pointer to where the constant
 *@c: constant
 *Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	return (NULL);
}
