#include"main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: initialization char
 * Return: a pointer to the array, or NULL if it fails
 * NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
		return (NULL);

	j = 0;

	i = (char *)(malloc(size * sizeof(char)));
	if (i == NULL)
		return (NULL);
	while (j < size)
	{
		*(i + j) = c;
		j++;
	}
	return (i);
}
