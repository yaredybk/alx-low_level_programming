#include <stdio.h>
/**
 * main - print alphabets
  * Return: always 0
  */
int main(void)
{
int i, j, k, l;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = i; k <= 57; k++)
{
for (l = j + 1; l <= 57; l++)
{
putchar (i);
putchar (j);
putchar (32);
putchar (k);
putchar (l);
if (i == 57 && j == 56)
{
putchar ('\n');
}
else
{
putchar (44);
putchar (32);
}
}
}
}
}
return (0);
}
