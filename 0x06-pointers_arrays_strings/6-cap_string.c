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

	j = 0;
	i = str;

	while (i[j] != '\0')
	{
		int a;

		a = 0;
		if (j == 0)
		{
			if (isalpha(i[j]) && islower(i[j]))
				i[j] = toupper(i[j]);
		}
		else if (i[j] == ' ' || i[j] == '\t' || i[j] == '\n')
			a = 1;
		else if (i[j] == '}' || i[j] == ',' || i[j] == ';')
			a = 1;
		else if (i[j] == '!' || i[j] == '?' || i[j] == '"')
			a = 1;
		else if (i[j] == '(' || i[j] == ')' || i[j] == '{')
			a = 1;
		if (a && i[j + 1] != '\0')
		{
			if (isalpha(i[j + 1]) && islower(i[j + 1]))
				i[j + 1] = toupper(i[j + 1]);
		}
		j++;
	}
	return (str);
}
