#include"main.h"

/**
 * _isupper - 
 * @c: input character to checked
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isupper(int c)
{
        if (isdigit(c))
                return (1);
        else
                return (0);
}
