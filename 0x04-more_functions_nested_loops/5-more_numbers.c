#include "main.h"

/**
 * more_numbers - prints no 0 - 9 except 2 and 4
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for(j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');

		}
		_putchar('\n');
	}
}
