#include <stdio.h>

/**
 *main - entry point
 *Description: a program that prints the numbers using while loop and 4 putchar
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
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
