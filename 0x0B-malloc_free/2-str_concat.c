#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings using malloc
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, and s2, or null if failure
 */
char *str_concat(char *s1, char *s2)
{
	int k, m, l1, l2, len;
	char *ans;

	l1 = l2 = 0;

	if (s1 != NULL)
	{
		k = 0;
		while (s1[k++] != '\0')
			l1++;
	}
	if (s2 != NULL)
	{
		k = 0;
		while (s2[k++] != '\0')
			l2++;
	}
	len = l1 + l2;
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (ans == NULL)
		return (NULL);

	for (k = 0; k < l1; k++)
		ans[k] = s1[k];
	for (m = 0; m < l2; m++, k++)
		ans[k] = s2[m];
	ans[len] = '\0';

	return (ans);
}
