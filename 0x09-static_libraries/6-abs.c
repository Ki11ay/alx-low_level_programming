#include "main.h"

/**
 *_abs - function that gets the absolute value
 *
 *@n: takes in integer type for function
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);

}
