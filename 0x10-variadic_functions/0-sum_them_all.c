#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all given argument
*@n: first parameter
*
*Return: return sum of arguments
* or 0, if error
*/

int sum_them_all(const unsigned int n, ...)
{

va_list list;
int sum = 0;
unsigned int i;

va_start(list, n);

if (n != 0)
{
for (i = 0; i < n; i++)
sum += va_arg(list, int);
}

va_end(list);
return (sum);

}
