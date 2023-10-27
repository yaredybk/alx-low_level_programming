#include"main.h"

/**
 * _strchr - locates a character in a string.
 * @s: input char
 * @c:target char for searching
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
