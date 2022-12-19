#include"main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 */
void rev_string(char *s)
{
	int i;
	char *j;
	int k;

	i = _strlen(s);
	j = s;
	k = i;

	while (i > 0)
	{
		i--;
		s[k - i] = j[i];
	}
}
