#include "main.h"

/**
 *_sqt - function that finds the sqare root
 *@i: input number
 *Return: square root of i
*/
double _sqt(double i)
{
	float sqrt, tmp;

	sqrt = i / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (i / tmp + tmp) / 2;
	}
	return (sqrt);
}
/**
 *lpf - finds and prints the largest prime number
 *@n: number to find
*/

void lpf(long int n)
{
	int pn, l;

	while (n % 2 == 0)
		n = n / 2;

	for (pn = 3; pn <= _sqt(n); pn += 2)
	{
		while (n % pn == 0)
		{
			n = n / pn;
			l = pn;
		}
	}

	if (n > 2)
		l = n;
	printf("%d\n", l);
}
/**
 *main - entry point
 *
 *Return: always 0 (success)
*/

int main(void)
{
	lpf(612852475143);

	return (0);
}
