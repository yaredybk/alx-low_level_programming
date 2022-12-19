#include"main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int tmp;
	int tmp2;

	tmp = *a;
	tmp2 = *b;
	*a = tmp2;
	*b = tmp;
}
