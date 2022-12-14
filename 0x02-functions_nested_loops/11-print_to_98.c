#include"main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: input number to start counting
 */
void print_to_98(int n)
{
	int k;

	k = n;
	do {
		_putchar(k + '0');
		if (k != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (k > 98)
			n--;
		else if (k < 98)
			n--;
	} while (k != 98);
}
