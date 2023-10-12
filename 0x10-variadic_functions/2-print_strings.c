#include "variadic_functions.h"

/**
 *print_strings - function that prints strings, followed by a new line
 *@separator: the separator string
 *@n: the number of arguments
 *@...: the input arguments to print
 *Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *s;
	va_list a;
	
	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(a, n);
	while (x--)
		printf("%s%s", (s = va-arg(a, char *)) ? s : "nil",
				x ? (separator ? separator : "") : "\n");
	va_end(a);
}
