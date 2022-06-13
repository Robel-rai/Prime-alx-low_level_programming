#include "main.h"

/**
 * add - takes in two numbers addes them then returns
 *
 * Return: 0
 */

int add(int x,int y)
{
	int sum;
	sum = x + y;
	_putchar((sum / 10) + '0');
	_putchar((sum % 10) + '0');
}
