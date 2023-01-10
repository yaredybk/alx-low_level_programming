#include"main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input string to bbe allocated
 * Return: a pointer to a newly allocated space in memory,
 * NULL if str = NULL
 */
char *_strdup(char *str)
{
	return (strdup (str));
}
