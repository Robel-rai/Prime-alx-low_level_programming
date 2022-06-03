#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * Header 
 * Returns 0;
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
		if(n>0)
		{
			printf("%i is positive",n);
		}else if (n=0)
		{
			printf("%i is zero",n);
		}else 
		{
			printf("%i n negative",n);
		}
	return (0);
}
