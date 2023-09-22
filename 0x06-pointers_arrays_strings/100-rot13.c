#include "main.h"

/**
 *rot13 - encode a string using rot13
 *@s: input string
 *Return: encoded string
*/

char *rot13(char *s)
{
	int i;

	char r13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char R13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == r13[i])
			{
				*s = R13[i];
				break;
			}
		}
		s++;
	}
	return (p);
}
