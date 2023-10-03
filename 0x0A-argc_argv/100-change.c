#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum amount of coins to make change
 * @argc: input argument count
 * @argv: input arguments
 * Return: 0 is successfull, 1 if not
 */
int main(int argc, char **argv)
{
	int t, c;
	unsigned int a;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	t = strtol(argv[1], &p, 10);
	c = 0;

	if (!*p)
	{
		while (t > 1)
		{
			for (a = 0; a < sizeof(cents[a]); a++)
			{
				if (t >= cents[a])
				{
					c += t / cents[a];
					t = t % cents[a];
				}
			}
		}
		if (t == 1)
			c++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", c);
	return (0);
}
