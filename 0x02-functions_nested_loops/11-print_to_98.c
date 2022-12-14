#include"main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: input number to start counting
 */
void print_to_98(int n)
{
	do {
		printf("%d",n);
		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
		if (n > 98)
			n--;
		else if (n < 98)
			n--;
	} while (n != 98);
}
