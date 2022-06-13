#include "main.h"

/**
 * time_table: prints out the time able of 9*9
 *
 * return:
 */

void time_table(void)
{
	int x;
	int y;
	int mul;

	for (x = 0; x < 10; x++){
	       for (y = 0; y <10; y++)
	       {
		       mul = x * y;
		       if (mul < 10)
		       {
			       _putchar(mul + '0');
			       _putchar(',');
			       _putchar(' ');
			       _putchar(' ');
		       }
		       else if (mul >= 10)
		       {
			       _putchar(mul + '0');
			       _putchar(',');
			       _putchar(' ');
		       }
	       }
	       _putchar('\n');
	}
}
