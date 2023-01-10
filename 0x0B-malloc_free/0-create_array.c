#include"main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: initialization char
 * Returns: a pointer to the array, or NULL if it fails
 * NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *i;

	i = (char *)(malloc(size * sizeof(char)));
	*(i) = c;
	return(i);
}
