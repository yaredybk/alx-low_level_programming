#include"main.h"

/**
 * _strncpy - copies a string.
 * at most n bytes of src are copied.
 * Warning: If there is no null byte among the first n bytes of src,
 * the string placed in dest will not  be  null-terminated.
 * @dest: first character used as destnation
 * @src: second character used as source
 * @n: input number to to determine how much bytes to take from src
 * Return: a pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

