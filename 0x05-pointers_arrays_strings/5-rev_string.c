#include"main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 */
void rev_string(char *s)
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
}
