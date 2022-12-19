#include"main.h"

/**
 * print_array -  prints n elements of an array of integers
 * followed by a new line
 * @a: input array
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;
	int nn;
	int *aa;

	nn = n;
	aa = a;
	i = 0;
	while (i < nn)
	{
		printf("%d",aa[i]);
		if (i < nn - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
