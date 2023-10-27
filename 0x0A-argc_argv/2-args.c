#include"main.h"

/**
 * main - prints the name of the function
 * @argc: number of arguments passed
 * @argv: an array of pointers of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
