#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of a program
 * @ac: arguments number
 * @av: arguments vector
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *string, *s;
	int a, b, c, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		s = av[a];
		b = 0;

		while (s[b++])
			len++;
		len++;
	}

	string = (char *)malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);

	for (a = 0, b = 0; a < ac && b < len; a++)
	{
		s = av[a];
		c = 0;

		while (s[c])
		{
			string[b] = s[c];
			c++;
			b++;
		}
		string[b++] = '\n';
	}
	string[b] = '\0';
	return (string);
}
