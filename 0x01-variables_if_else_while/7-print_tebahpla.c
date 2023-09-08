#include <stdio.h>

/**
 *main - entry point
 *Description: a program that prints the alphabet using for loop and putchar
 *Return: 0 (Success)
*/
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
