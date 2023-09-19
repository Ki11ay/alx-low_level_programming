#include "main.h"

/**
 *print_rev - prints reversed string followed by anew line
 *
 *@a: pointer to the string to print
 *
 *Return: void
*/

void print_rev(char *a)
{
	int s = 0;

	while (a[s])
		s++;

	while (s--)
		_putchar(a[s]);
	_putchar('\n');
}
