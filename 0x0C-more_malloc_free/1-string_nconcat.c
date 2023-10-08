#include "main.h"

/**
 * *string_nconcat - function concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: unsigned int
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, l1, l2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	}

	s = malloc(l1 + n + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		s[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		s[a] = s2[b];
		a++;
	}

	s[a] = '\0';
	return (s);
}
