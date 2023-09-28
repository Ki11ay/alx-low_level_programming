#include "main.h"

/**
 *wildcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: 1 if identical, 0 if not
*/
char mts(char *s2);
int ser(char *s1, char *s2);
int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !mts(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*'? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = mts(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += ser(s1, s2);
		return (!!r);
	}
}

/**
 *mts - iterrates past asterisk
 *@s2: the second string
 *Return: the pointer past stars
 *
*/

char mts(char *s2)
{
	if (*s2 == '*')
		return (mts(s2 + 1));
	else
		return (s2);
}

/**
 *ser - does wonder
 *@s1: first string
 *@s2: the second string
 *Return: 1 if the same, 0 if not
*/

int ser(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += ser(s1 + 1, s2);
	return (r);
}
