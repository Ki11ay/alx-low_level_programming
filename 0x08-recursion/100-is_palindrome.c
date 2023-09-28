#include "main.h"

/**
 *is_palindrome - a function returns 1 if a string is a palindrome and 0 if not
 *@s: pointer to the location of the string
 *Return: 1 if its true, 0 if not
*/

int last(char *s);
int checker(char *s, int t, int d, int o);
int is_palindrome(char *s)
{
	int d = last(s);

	return (checker(s, 0, d - 1, d % 2));
}
/**
 *last - gives the last index of a string
 *@s: pointer to the location of string
 *Return: int
*/
int last(char *s)
{
	int m = 0;

	if (*s > '\0')
		m += last(s + 1) + 1;
	return (m);
}

/**
 *checker - checks if a string is palindrome
 *@s: pointer to the string
 *@t: start of the string
 *@d: end of the string
 *@o: input
 *Return: 1 or 0
*/

int checker(char *s, int t, int d, int o)
{
	if ((t == d && o != 0) || (t == d + 1 && o == 0))
		return (1);
	else if (s[t] != s[d])
		return (0);
	else
		return (checker(s, t + 1, d - 1, o));
}
