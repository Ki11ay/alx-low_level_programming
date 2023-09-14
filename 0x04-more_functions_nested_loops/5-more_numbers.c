#include "main.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 *Return: always 0 (success)
*/

void more_numbers(void)
{
	int i, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			i = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				i = count % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
