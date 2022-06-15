#include "main.h"

/**
 * _isupper - checkes if the caracter for the possibility of Upp or Low
 * @c - numbre to check validity
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (0);
}
