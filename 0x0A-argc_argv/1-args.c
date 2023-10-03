#include <stdio.h>

/**
 * main - a function that prints the number of arguments given
 * @argc: arguments count
 * @argv: pointer to arguments vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
