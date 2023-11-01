#include"main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: array of arguments
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */

char *argstostr(int ac, char **av)
{
	int i;
	int len;
	char *p;
	int pos;

	len = 0;
	pos = 0;

	if (ac == 0 || av == NULL)
		retun (NULL);

	for (i = 0; i < ac; i++)
	{
		int j;

		j = 0;

		while (av[i][j])
		{
			len ++;
		}
		len ++;
	}
	p = (char *)(sizeof(char) * len);
	if (p ==NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		int j;

		j = 0;

		while(ac[i][j])
		{
			p[pos] = ac[i][j];
			j++;
			pos++;
		}
		p[pos] = "\n";
		pos++;
	}
	return (p);
}
