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
int l;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
if (j == 9)
{
k = i + 1;
l = 0;
}
else
{
k = i;
l = j + 1;
}
for (; k <= 57; k++)
{
for (; l <= 57; l++)
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
}
return (0);
}
