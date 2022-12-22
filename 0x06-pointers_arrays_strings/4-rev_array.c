#include"main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input array to be reversed
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = n;
	j = 0;
	i--;

	while (j <= i)
	{
		int store;

		store = a[i];
		a[i] = a[j];
		a[j] = store;
		j++;
		i--;
	}
}
