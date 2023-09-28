#include "main.h"

/**
 *_sqrt_recursion - a function that gives the square root
 *@n: the integer we want to find the square root of
 *Retrun: the square root of it has any or -1 if n doesnt have square root
 *
*/

int _sqrt_recursion(int n)
{
	int v = 1;

	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (_sqrt_recursion(n));
	else
		return (-1);
}
