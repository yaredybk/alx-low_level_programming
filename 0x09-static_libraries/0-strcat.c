#include"main.h"

/**
 * _strcat - concatenates two strings,
 * by appending the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: first character used as destnation
 * @src: second character used as source
 * Return:  a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
