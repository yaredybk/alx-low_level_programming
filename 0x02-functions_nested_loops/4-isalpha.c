#include"main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: target character
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	int i = isalpha(c);
	
	if (i)
		return (1);
	else
		return (0);
}
