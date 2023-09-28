#include "main.h"

/**
 *factorial - a function that returns a factorial of a given number
 *@n: input integer
 *Return: the factorial of the input
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
