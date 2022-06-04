#include <stdio.h>

/**
 * main - main body
 * Description: Prints from A to Z in lower case
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		if(x != 'z')
			putchar(x);
		else
			putchar(x);
			putchar('\n');
	}
	return (0);
}
