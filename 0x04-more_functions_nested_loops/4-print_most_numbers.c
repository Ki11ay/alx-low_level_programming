#include "main.h"

/**
 *print_most_numbers - prints form 0 - 9 without 2,4
 *
 *Return: always 0 (success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
