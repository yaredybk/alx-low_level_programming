#include <stdio.h>
/**
 * main - prints number combinations
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
	int ii;
	int jj;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j == 57)
			{
				ii = i + 1;
				jj = 48;
			}
			else
			{
				ii = i;
				jj = j + 1;
			}
			for (; ii <= 57; ii++)
			{
				for (; jj <= 57; jj++)
				{
					if ((ii != 48) | (jj != 49))
					{
						putchar(44);
						putchar(32);
					}
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(ii);
					putchar(jj);
				}
				jj = 48;
			}
		}
	}
	putchar('\n');
return (0);
}
