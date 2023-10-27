#include"main.h"

/**
 * main - prints the name of the function
 * Return : 0
 */
void main(int argc, char *argv[])
{
	int i=0;

	for(i; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
