#include <stdio.h>
/**
 * main - print alphabets
 * Return: always 0
 */
int main(void)
{
int i;
int j;
int k;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
for (k = j +1; k <= 57; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55)
{
putchar(44);
putchar(32);
}
else
{
putchar('\n');
}
}
}
}
return (0);
}
