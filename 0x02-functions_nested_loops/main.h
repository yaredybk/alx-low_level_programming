#include<stdio.h>

#ifndef mainHeader
#define mainHeader
int print_putchar(void);
void print_alphabet(void);

#endif
/*
 * putchar: prints "_putchar"
 *
 * Returns: always 0
 */
inline int print_putchar(void)
{
	printf("_putchar\n");
	return (0);
}
/**
 * print_alphabet - print alphabets
 * Return: always void
 */
inline void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
}
