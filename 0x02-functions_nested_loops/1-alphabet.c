#include <stdio.h>

/**
 * main - print alphabet
 * Description: prints the alpha bet
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char le;

	for (le = 'a';le <= 'z'; ++le)
	{
		putchar(le);
	}
	putchar('\n');
}
		   	
