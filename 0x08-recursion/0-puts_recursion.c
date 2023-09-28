#include "main.h"

/**
 *_puts_recursion - is a function that Resembles putsusing recursion
 *@s: pointer to the location of the string
 *Return: nothing
 *
 *
 *
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
