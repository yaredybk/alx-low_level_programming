#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: alwas 0
 */
int main(void)
{
	int counter;
	unsigned long i;
	unsigned long j;

	counter = 3;
	i = 1;
	j = 2;

	printf("1, 2");

	while (counter <= 98)
	{
		long sum;

		sum = i + j;
		i = j;
		j = sum;
		printf(", %lu", j);
		counter++;
	}
	printf("\n");
	return (0);
}
