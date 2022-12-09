#include <stdio.h>
/**
 * main - print alphabets
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
	if (i > 48)
	{
		putchar(44);
		putchar(32);
	}
	putchar(i);
}
putchar('\n');
return (0);
}
