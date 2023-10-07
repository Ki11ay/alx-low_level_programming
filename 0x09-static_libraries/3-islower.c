#include "main.h"

/**
 *_islower - function to check if a character is a lowerca
 *
 *@c: checks input of function
 *
 * Return: returns 1 if 'c'is lower otherwise always 0(success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
