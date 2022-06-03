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
			printf(" is positive");
		}else if (n=0)
		{
			printf(" is zero");
		}else 
		{
			printf(" in negative");
			
		}
	return (0);
}
