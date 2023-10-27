#include"main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: an array of pointers of arguments
 * Return: the multplication of two numbers
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc != 3)
	{
		(printf("Error\n"));
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}
