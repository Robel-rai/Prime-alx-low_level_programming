#include <stdio.h>
#include <unistd.h>
/**
 * main - main body
 * Description: Prints from A to Z in lower case
 * Return: 0
 */
int main(void)
{
	for (int x= 'A'; x <= 'Z'; x++)
	{
		if(x != 'Z')
			putchar(tolower(x));
		else if(x == 'z')
			putchar("\n");
	}
	return (0);
}
