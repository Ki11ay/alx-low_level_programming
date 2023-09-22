#include "main.h"

/**
 *string_toupper - change all lowercase letters to uppercase
 *@str: the string we want to change
 *
 *Return: string str
*/

char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
	}
	return (str);
}
