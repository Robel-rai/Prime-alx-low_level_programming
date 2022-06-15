#include "main.h"

/**
 * _isupper - checkes if the caracter for the possibility of Upp or Low
 * @c - numbre to check validity
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		_putchar('1');
	else if (c >= 'A' && c <= 'Z')
		_putchar('0');
}
