#include"main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: input string
 * Return: capitalized string
 */
char *string_toupper(char *str)
{
	char *i;
	int j;

	j = 0;
	i = str;

	while (i[j] != '\0')
	{
		if (isalpha(i[j]) && islower(i[j]))
			i[j] = toupper(i[j]);
		j++;
	}
	return (str);
}
