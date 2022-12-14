#include"main.h"

/**
 * print_sign - prints the sign of a number
 * @n: input number for testing
 * Returns: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zeroReturns 1 and prints + if n is greater than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		printf('-');
		return (0);
	}
	else if(n > 0)
	{
		printf('+');
		return (1);
	}
    
