#include <stdio.h>

/**
 * main - a function that prints all arguments it receives
 * @argc: argument count
 * @argv: input arguments
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
