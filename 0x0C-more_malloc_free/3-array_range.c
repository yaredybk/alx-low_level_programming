#include"main.h"

/**
 * array_range - creates an array of integers.
 *@min:the minimun int
 *@max: the max int
* Return: a pointer to a int array.
*/
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min;
	p = malloc((j + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < j + 1; min++, i++)
	{
		*(p + i) = min;
	}
	return (p);
}
