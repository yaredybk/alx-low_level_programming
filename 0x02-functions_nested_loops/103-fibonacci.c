#include<stdio.h>

/**
 * main - prints the sum of the even-valued terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000
 * followed by a new line.
 * Return: alwas 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int j;
	unsigned long int net;

	i = 1;
	j = 2;
	net = 0;

	while (1)
	{
		int tempsum;

		if (j % 2 == 0)
			net += j;
		tempsum = i + j;
		if (tempsum > 4000000)
			break;
		i = j;
		j = tempsum;

	}
	printf("%lu\n", net);
	return (0);
}
