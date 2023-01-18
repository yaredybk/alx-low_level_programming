#include"function_pointers.h"

/**
 * print_name -  prints a name
 * @name : name string input
 * @f : function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
