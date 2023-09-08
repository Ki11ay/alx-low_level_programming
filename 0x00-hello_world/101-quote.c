#include <stdio.h>

/**
 *main - entry point
 *
 *Description : a C program which print a quote using write function
 * write(int fd,const void buf,size_t count)
 *
 *Return: 1 (Not Successful)
*/
int main(void)
{
char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, qu, 59);
return (1);
}
