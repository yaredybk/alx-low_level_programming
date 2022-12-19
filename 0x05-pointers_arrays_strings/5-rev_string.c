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
	k = i - 1;
	j = s;

	while (i > 0)
	{
		i--;
		printf("i:%d,k-i:%d,org:%c\n",i,k-i,s[i]);
		j[k - i] = s[i];
		printf("j:%s,s:%s", j , s);
	}
	s = j;
}
