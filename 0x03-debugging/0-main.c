#include "main.h"

/**
 * positive_or_negative - check if the numver is posetive or negative
 * @n - is an integer
 * Return - Always 0
 */

void positive_or_negative(int i)
{
		if (i > 0)
			printf("%i is positive\n", i);
		else if (i == 0)
			printf("%i is zero\n", i);
		else
			printf("%i is negative\n", i);
}
