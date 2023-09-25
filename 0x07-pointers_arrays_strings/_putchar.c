#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character m to stdout
 * @m: The character to print
 * Return: On success 1.
 *         On error, -1 is returned, and error is set approprilately
 *
*/

int _putchar(char m)
{
	return (write(1, &m, 1));
}
