#include <stdio.h>

/**
 *main - entry point
 *Description: a program that prints the alphabet using for loop and putchar
 *Return: 0 (Success)
*/
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphAbet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);
	for (j = 0; j < 26; j++)
		putchar(alphAbet[j]);
	putchar('\n');
	return (0);
}
