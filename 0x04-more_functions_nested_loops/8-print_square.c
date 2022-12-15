#include"main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: input number
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; i++)
			{
				_putchar('#');
			}
		}
	else
		_putchar('\n');
}
