#include"main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 */
void puts_half(char *str)
{
	int i;
	int j;
	char *s;

	i = strlen(str);
	s = str;

	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		printf("%c",s[j]);
		j++;
	}
	printf("/n");
}
