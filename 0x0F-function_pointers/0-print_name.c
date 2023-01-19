#include"function_pointers.h"

/**
 * print_name -  prints a name
 * @name: name string input
 * @f: function that prints a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
		f(name);
}
