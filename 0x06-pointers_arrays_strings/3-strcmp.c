#include"main.h"

/**
 * _strcmp - compares two strings
 * compares  the two strings s1 and s2.  The locale is not taken into account,
 * @s1: first string
 * @s2: second string
 * Return: an integer less than, equal to, or greater than zero
 * if s1 (or the first n bytes thereof) is found, respectively,
 * to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
