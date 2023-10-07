#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 *@s: pointer to string
 *@accept: string to match with
 *Return: pointer to the byte in s that matches accept or null if no match
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *c;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				c = &s[i];
				return (c);
			}
			j++;
		}
		i++;
	}
	return (0);
}
