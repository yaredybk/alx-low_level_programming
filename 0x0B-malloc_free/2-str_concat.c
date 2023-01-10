#include"main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer  to a newly allocated space in memor
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp;

	if (s1 == NULL && s2 == NULL)
	{
		tmp = strdup("");
		return (tmp);
	}
	else
	{
		tmp = strdup(strcat(s1, s2));
		if (tmp)
			return (tmp);
		else
			return (NULL);
	}
}
