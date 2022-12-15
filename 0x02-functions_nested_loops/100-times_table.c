#include"main.h"
/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: input number to determine size
 * If n is greater than 15 or less than 0 the function will not print anything
 * the table is filled with multplication of the row and column
 */
void print_times_table(int n)
{
	if (!(n > 15 || n < 0))
	{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			int k;
		       k = i * j;

			_putchar(',');
			_putchar(' ');
			if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k < 100)
			{
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				printf(" %d", k);
			}
		}
		_putchar('\n');
	}
	}
}
