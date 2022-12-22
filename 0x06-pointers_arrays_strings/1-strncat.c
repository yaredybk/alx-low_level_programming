#include"main.h"

/**
 * _strncat - concatenates two strings
 * by appending at most n bytes from src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: first character used as destnation
 * @src: second character used as source
 * Return:  a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
