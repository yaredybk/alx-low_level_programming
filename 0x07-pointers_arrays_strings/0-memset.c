#include"main.h"

/**
 * _memset - fills memory with a constant byte.
 *  fills the first n bytes of the memory area pointed to by s
 *  with the constant byte b
 *  @s: input pointer
 *  @b: byte to fill with
 *  @n: input number, fill the first n bytes
 *  Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(*s, b, n));
}
