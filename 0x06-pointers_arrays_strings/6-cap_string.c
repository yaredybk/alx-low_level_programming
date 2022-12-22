#include"main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	char *i;
	int j;
	char *check;

	j = 0;
	i = str;
	check = " \t\n,;.!?\"(){}";

	while (i[j] != '\0')
	{
		int a;
		int b;

		a = 0;
		b = 0;
		while (++b <= 13)
			if (i[j] == check[b])
				a = 1;
		if (a == 1)
			if (isalpha(i[j]) && islower(i[j]))
				i[j] = toupper(i[j]);
		j++;
	}
	return (str);
}
