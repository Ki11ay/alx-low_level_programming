#include <stdio.h>

/**
 *main - entry point
 *Description: a program that prints the numbers
 *Return: 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
