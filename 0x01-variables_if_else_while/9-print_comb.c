#include <stdio.h>
/**
 * main - print alphabets
 * Return: always 0
 */
int main(void)
{
int i;
putchar(32);
putchar(48);
for (i = 49; i <= 57; i++)
{
putchar(44);
putchar(32);
putchar(i);
}
return (0);
}
