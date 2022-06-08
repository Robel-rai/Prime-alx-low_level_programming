#include "main.h"

/**
 * _abs : Prints the aAbsolute vale
 * Description: The function takes in input fro the user and displays 
 * the absolute value of the proram.
 * @a: a is an integer
 * Return: 0
 */

int _abs(int a)
{
	if (a < 0)
	{
		_putchar(a - (a * a));
	}
	else if (a==0)
	{
		_putchar('0');
	}
	else
	{
		_putchar(a + (a * a));
	}
}
