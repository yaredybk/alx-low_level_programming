#include "main.h"

/**
 * print_alphabet - print alphabets a - z
 * Return: always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
}
