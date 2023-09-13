#include "main.h"

/**
 *main - entry point
 *
 *Description: prints the even fibonacci numbers less than 4000000
 *
 *Return: always 0 (success)
*/

int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	int p;

	while (1)
	{
		sum = f1 + f2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			p += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%d\n", p);

	return (0);
}
