#include"main.h"

/**
 * puts2 - prints every other character of a string,
 * tarting with the first character, followed by a new line.
 * @str: input string
 */
void puts2(char *str)
{
	int i;
	int j;
	char *s;

	s = str;
	i = strlen(str);
	j = 0;

	while (j < i)
	{
		_putchar(s[j]);
		j += 2;
	}
	_putchar('\n');
}
