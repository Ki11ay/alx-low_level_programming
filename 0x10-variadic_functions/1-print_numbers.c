#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator: the separator string
 *@n: the number of arguments
 *@...: the input arguments to print
 *Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list a;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(a, n);
	while (x--)
		printf("%d%s", va-arg(a, int),
			x ? (separator ? separator : "") : "\n");
	va_end(a);
}
