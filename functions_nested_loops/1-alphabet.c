#include <stdio.h>
#include "main.h"

/*
 * print alphabet in lowercase
*/

/**
* print_alphabet - entry point
* Return: Always 0 (Success)
*/
int print_alphabet(void)
{
char x = 97;
for (; x <= 122; x++)
	_putchar(x);
_putchar(10);
return (0);
}
