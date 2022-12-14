#include "main.h"

/**
 * jack_baur - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_baur(void)
{
	int h;
	int hh;
	int m;
	int mm;

	for (h = 0; i <= 2; h++)
		for (hh = 0; hh <= 9; hh++)
		{
			if (h == 2 && hh > 3)
				break;
			for (m = 0; m <= 5; m++)
				for (mm = 0; mm <= 9; mm++)
				{
					_putchar(h);
					_putchar(hh);
					_putchar(':');
					_putchar(m);
					_putchar(mm);
					_putchar('\n');
				}
		}
}
