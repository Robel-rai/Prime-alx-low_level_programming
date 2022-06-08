#include "main.h"

/**
 * _ismain - check for lower case
 * Description: Checkes if an input is lower case of upper case 
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
