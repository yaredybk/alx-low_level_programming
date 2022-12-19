#include"main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: input char
 */
void print_rev(char *s)
{
	int j;

	j = strlen(s);

	while (j > 0)
	{
		j--;
		_putchar(s[j]);
	}
	_putchar('\n');
}
