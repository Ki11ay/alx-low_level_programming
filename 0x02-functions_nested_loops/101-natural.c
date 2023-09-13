#include "main.h"

/**
 *main -  entry point
 *
 *Description: computes the sum of all the multiples of 3 & 5 belw 1024
 *
 *Return: always 0 (success)
*/

int main(void)
{
	int s, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
	}
	printf("%d\n", s);

	return (0);
}
