#include <stdio.h>
/**
 * main - print alphabets
 * Return: always 0
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
continue;
putchar(i);
}
putchar('\n');
return (0);
}