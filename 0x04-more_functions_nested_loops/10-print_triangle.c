#include"main.h"

/**
 * print_triangle - prints a square, followed by a new line.
 * @size: input number
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	else
		_putchar('\n');
}
