#include"main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: input string
 */
void _print_rev_recursion(char *s)
{
	int i;
	char j;
	int k;

	k = 0;
	i = strlen(s) - 1;
	while (i >= k)
	{
		j = s[i];
		s[i] = s[k];
		s[k] = j;
		k++;
		i--;
	}
	_puts_recursion(s);
