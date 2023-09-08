#include <stdio.h>

/**
 *main - entry point
 *Description: a program that prints the numbers
 *Return: 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
