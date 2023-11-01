#include"main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size - size of the array
 * @c - initialization chaaracter
 * Return: NULL if size = 0 or
 * a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c){
	char *p;
	unsigned int j;

	if (size == 0)
		return (NULL);
	p = (char *)(malloc(size * sizeof(char)));
	if(p = NULL)
		return (NULL);
	while (j < size){
		*(p + j) = c;
		j++;
	}
}
