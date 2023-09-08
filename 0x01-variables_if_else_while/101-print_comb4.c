#include <stdio.h>

/**
 *main - entry point
 *Description: a program that prints the numbers using while loop and 6 putchar
 *Return: 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int k = 0;

			while (k <= 9)
			{
				if (i != j && i < j && j != k && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
