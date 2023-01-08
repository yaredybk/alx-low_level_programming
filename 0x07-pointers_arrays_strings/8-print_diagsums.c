#include"main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: input matrix (2 dimensional array)
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	i = 0;

	while (i < size)
	{
		sum1 += *(a + (size * i) + i);
		sum2 += *(a + (size * i) + (size - i - 1));
	}
	printf("%d, %d", sum1, sum2);
}
