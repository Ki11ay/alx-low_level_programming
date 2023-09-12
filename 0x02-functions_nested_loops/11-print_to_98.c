#include "main.h"

/**
 *print_to_98 - prints from i to 98
 *
 *@i: input
*/
void print_to_98(int i)
{
	int s;

	if (i > 98)
		for (s = i; s > 98; s--)
			printf("%d, ", s);
	else if (i < 98)
		for (s = i; s < 98; s++)
			printf("%d, ", s);
	printf("98\n");
}
