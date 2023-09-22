#include "main.h"

/**
 *_strcmp - function compares two strings
 *
 *@s1: first string
 *@s2: second string
 *Return: 1 if true, 0 if else
*/

int _strcmp(char *s1, char *s2)
{
	int done = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			done = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (done)
}
