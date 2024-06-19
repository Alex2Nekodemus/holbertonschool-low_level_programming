#include <stdio.h>

/**
 * main - Entry point
 * Description: give the quote
 *
 * Return: Always 0
 */
int main(void)
{
	char quote[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;
	
	for (i = 0; i <= 57; i++)
		putchar(quote[i]);

	putchar(10);
	return (0);
}
