#include "main.h"

/**
 * print_last_digit - prints the last digit
 * Description: Tells the last digit of our function
 * @b - is an integr
 * Return: 0
 */

int print_last_digit(int b)
{
	int lasdi;
	
	if (b < 0)
	{
		b = b * -1;
	}
	lasdi = b%10;
	_putchar(lasdi + '0');
	return (lasdi);
}
