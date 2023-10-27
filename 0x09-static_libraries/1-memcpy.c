#include"main.h"

/**
 * _memcpy - copies memory area.
 * copies n bytes from memory area src to memory area dest
 * @dest: destnation memory area
 * @src: source memory area
 * @n: number of memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
