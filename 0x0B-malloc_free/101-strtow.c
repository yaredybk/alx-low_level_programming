#include"main.h"

/*
 * strtow - function that splits a string into words.
 * @str: input string
 * Return: a pointer to an array of strings (words)
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * return NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **newchar = NULL, int wordslen = 0;

	wordslen = noofwords(str);
	newchar = (char **)malloc(sizeof(char *) * wordslen);
	if (newchar == NULL)
		return (NULL);

	return (newchar);
}

/*
 * noofwords - counts no of words separated by space
 * @str: input string
 * Return: number of strings
 */
int noofwords(char *str)
{
	int nochars = 0, int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		if (str[i] != ' ')
		{
			if (i == 0)
				nochars++;
			if (str[i - 1] == ' ')
				nochars++;
		}

	}

	return (newchar);
}
