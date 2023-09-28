#include "main.h"
#include <stdio.h>

/**
 *is_prime_number - a function that ckecks if n is a prime number
 *@n: input integer
 *@p: a number to start the check
 *Return: 1 if prime, 0 if not
*/
int _check(int n, int p);
int is_prime_number(int n)
{
	return (_check(n, 2));
}

/**
 *_check - checks if n can be divided by all numbers less than n
 *@n: input
 *@p: a number to start the check
 *Return: integer
*/

int _check(int n, int p)
{
	if (p >= n && n > 1)
		return (1);
	else if (n % p == 0 || n <= 1)
		return (0);
	else
		return (_check(n, p + 1));
}
