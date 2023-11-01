#include"main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1 - firist string
 * @s2 - second string
 * Return: pointer to a newly allocated space in memory.
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *strnew = NULL;
	unsigned int i;
	int n1;
	int n2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	strnew = (char *)malloc((n1 + n2 + 1) *sizeof(char));
	if (strnew == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		strnew[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		strnew[i] = s2[count];
		count++;
	}
	return (strnew);
}
