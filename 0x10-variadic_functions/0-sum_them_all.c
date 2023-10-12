#include "variadic_functions.h"

/**
 *sum_them_all - a function that returns the sum of all its parameters
 *@n: the integer input for number of arguments
 *@...: the integers to sum
 *Return: the integers sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum, count = n;
	va_list a;

	if (!n)
		return (0);
	va_start(a, n);
	for (count = n; count >= 0; count--)
		Sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
