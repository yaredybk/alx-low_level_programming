#include"main.h"

/**
 * main - prints the name of the function
 * @argc: number of arguments passed
 * @argv: an array of pointers of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 0)
	{
		return (printf("invalid no of arguments"));
	}
	printf("%s\n", argv[0]);
	return (0);
}
