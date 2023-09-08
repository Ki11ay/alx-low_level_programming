#include <stdio.h>
#include <string.h>

/**
 *main - entry point
 *
 *Description : a C program which print a quote using putchar and arrays
 *
 *Return: 1 (Not Successful).
*/
int main(void)
{
char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
size_t arrayLength = strlen(qu);
size_t i = 0;
for (i = 0; i < arrayLength; i++)
{
putchar(qu[i]);
}
printf("\n");
return (1);
}
