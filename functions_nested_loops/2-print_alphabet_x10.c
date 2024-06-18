#include <stdio.h>
#include "main.h"

/*
 * print alphabet in lowercase
*/

/**
* print_alphabet_x10 - entry point
* Return: Always 0 (Success)
*/
int print_alphabet_x10(void)
{
char x;
int i;
for (i = 0; i < 10; i++)
{
	for (x = 97; x <= 122; x++)
		_putchar(x);
	_putchar(10);
}
return (0);
}
