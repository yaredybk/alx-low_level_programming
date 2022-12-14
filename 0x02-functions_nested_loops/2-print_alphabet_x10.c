#include "main.h"

/**
 * print_alphabet_10x - print alphabets a - z
 * Return: always 0
 */
void print_alphabet_10x(void)
{
	char i;
	int j;

	for(j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		putchar(i);
		putchar('\n');
	}
}
