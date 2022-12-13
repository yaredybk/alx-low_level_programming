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
 * main - print alphabets
 * Return: always 0
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
return (0);
}
