#include<stdio.h>
#include<stdlib.h>

int *changeit(int coin, int remaining, int coins);

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: Number of command line arguments
 * @argv: Array name
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 * Coins of values usede for change 25, 10, 5, 2, and 1 cent
 * Return: 1 if the number of arguments passed to your program is not exactly 1
 * and print Error, followed by a new line
 * else return 0
 */

int main(int argc, char *argv[])
{
	int *myarr;
	int temp[2];

	myarr = &temp[0];

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	myarr[0] = 0;
	myarr[1] = atoi(argv[1]);

	if (myarr[1] <= 0)
	{
		printf("0\n");
		return (0);
	}

	myarr = changeit(myarr[0], myarr[1], 25);
	myarr = changeit(myarr[0], myarr[1], 10);
	myarr = changeit(myarr[0], myarr[1], 5);
	myarr = changeit(myarr[0], myarr[1], 2);
	myarr = changeit(myarr[0], myarr[1], 1);
	printf("%d\n", myarr[0]);
	return (0);
}

/**
 * changeit - calculates the coins required for the remaining coin
 * @change: amount of coins to change
 * @remaining: the remaining unchanged coins
 * @coins: the coin to be changed by: one of 25, 10, 5, 2, 1 cents
 * Return: an array holding change and remaining coin
 */
int *changeit(int change, int remaining, int coins)
{
	static int r[2];

	if (remaining >= coins)
	{
		change += remaining / coins;
		remaining %= coins;
	}
	r[0] = change;
	r[1] = remaining;
	return (r);
}
