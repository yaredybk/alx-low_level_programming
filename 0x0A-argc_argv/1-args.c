#include<stdio.h>

/**
 * main - prints the number of arguments passed into it. followed by a new line
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
