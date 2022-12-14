#include"main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: input number
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int j;

	j = (i % 10);
	if (j < 0)
		j = j * -1;
	_putchar(j + '0');
	return (j);
}
