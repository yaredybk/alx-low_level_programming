#include"main.h"

/**
 * leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: input string to be incoded
 * Return: incoded string
 */
char *leet(char *str)
{
	char *test;
	char *rep;
	int i;

	test = "aAeEoOtTlL";
	rep = "4433007711";
	i = 0;

	while (str[i] != '\0')
	{
		int j;

		j = 0;
		while (j != '\0')
		{
			if (str[i] == test[j])
			{
				str[i] = rep[j];
				break;
			}
			j++;
		}
		i++;
	}
}
