#include"main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: input number
 */
void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
