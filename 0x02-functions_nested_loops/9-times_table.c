#include"main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 0; j <= 9; j++)
		{
			int k = i * j;

			_putchar(',');
			if (k < 10)
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
		_putchar('\n');
	}
