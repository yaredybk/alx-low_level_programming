#include<stdio.h>

/*
 * putchar: prints "_putchar"
 *
 * Returns: always 0
 */
int print_putchar(void)
{
	printf("_putchar\n");
	return (0);
}

/**
 * print_alphabet - print alphabets
 * Return: always void
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
}
