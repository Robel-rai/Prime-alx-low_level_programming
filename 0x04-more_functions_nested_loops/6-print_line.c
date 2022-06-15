#include "main.h"

/**
 * print_line - print a line depending on the given n value
 *
 * Return: noting
 */
void print_line(int n)
{
	int i;
	
	if (n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
}	
