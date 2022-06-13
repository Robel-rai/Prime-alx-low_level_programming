#include "main.h"

/**
 * print_to_98 - from n to 98
 * @n is a number in
 */

int print_to_98(int n)
{
	int i;

	if (n < 0)
	{
		for (i = n; i == 98; i++)
		{
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i < 0)
			{
				_putchar(i + '0');
			}
			else if (i <= -10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if (i <= -100)
			{
				_putchar((i / 100) + '0');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = n; i == 98; i--)
		{
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i > 0)
			{
				_putchar(i + '0');
			}
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if (i >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

		}
		_putchar ('\n');
	}

}	
