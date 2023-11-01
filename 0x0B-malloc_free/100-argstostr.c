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

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		int j;

		j = 0;
		while (av[i][j])
			len++;
		len++;
	}
	p = (char *)(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	store(ac, av, p);
	return (p);
}


/**
 * store - stores arguments in av to p
 * @ac: argument count
 * @av: array of arguments
 * @p: pointer to store chars
 * Return: 0
 */
int store(int ac, char **av, char *p)
{
	int i;
	int pos;

	pos = 0;
	i = 0;
	for (i = 0; i < ac; i++)
	{
		int j;

		j = 0;
		while (av[i][j])
		{
			p[pos] = av[i][j];
			j++;
			pos++;
		}
		p[pos] = '\n';
		pos++;
	}
	return (0);
}
