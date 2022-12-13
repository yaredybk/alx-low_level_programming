#include<stdio.h>

#ifndef mainHeader
#define mainHeader

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

#endif
