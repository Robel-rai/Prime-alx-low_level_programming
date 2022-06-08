#include <stdio.h>

/*
 * main - prints the code
 * Description: writes the alplabet in lower case from a to z
 * Return: 0
 */

int main()
{
	print_alphabet();
	putchar('\n');
	return (0);
}

int print_alphabet(){
	char x;
	for (x = 'a';x <= 'z';++x)
	{
		putchar(x);
	}
}
