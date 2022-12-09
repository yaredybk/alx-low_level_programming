#include <stdio.h>
/**
 * main - print alphabets
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			if (i > 48)
			{
				putchar(44);
				putchar(32);
			}
			putchar(i);
			putchar(j);
		}
	}
	putchar('\n');
return (0);
}
