#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - main block
 * Description: takes a random number n 
 * then displays if it is Posetive, Negative or Zero
 * Returns : 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

		if(n>0)
		{
			printf("%i is positive\n",n);
		}else if (n==0)
		{
			printf("%i is zero\n",n);
		}else 
		{
			printf("%i is negative\n",n);
		}
	return (0);
}
