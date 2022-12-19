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

	i = strlen(s);
	j = s;
	k = i - 1;

	while (i > 1)
	{
		i--;
		s[k - i] = j[i];
	}
}
