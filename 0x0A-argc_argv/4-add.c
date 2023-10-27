#include"main.h"

/**
 * main - add two numbers
 * @argc: number of arguments passed
 * @argv: an array of pointers of arguments
 * Return: Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error
 * followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int s = 0;
	int ind = 0;

	if (argc < 2)
		return (printf("0\n"));
	for (; ind < argc; ind++)
	{
		int val = 0;

		if (*argv[ind] == '0')
			continue;
		val = atoi(argv[ind]);
		if (val == 0)
		{
			printf("Error\n");
			return (1);
		}
		s += val;
	}
	printf("%d\n", s);

	return (0);
}
