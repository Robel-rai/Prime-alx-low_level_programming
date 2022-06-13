#include "main.h"

/**
 * times_table - prints out the time able of 9*9
 *
 * return:
 */

void print_times_table(int n)
{
	int x;
	int y;
	int mul;

	if (n > 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				mul = x * y;
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (y == 0)
				{
					_putchar('0');
				}
				else if (mul >= 10)
				{
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if ((mul < 10) && (y != 0))
				{
					_putchar(' ');
					_putchar((mul % 10) + '0');
				}
			}
	       		_putchar('\n');
		}

	}
},,,,,,,,,,,
