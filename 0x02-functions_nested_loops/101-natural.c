#include<stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: always 0
 */
int main(void)
{
	int n;
	int net = 0;

	for (n = 3; n <= 1024; n++)
	{
		if ((n % 3) == 0)
			net += n;
		else if ((n % 5) == 0)
			net += n;
	}
	printf("%d\n", net);
	return (0);
}
