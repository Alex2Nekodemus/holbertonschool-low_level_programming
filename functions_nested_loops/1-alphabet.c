#include <stdio.h>
#include "main.h"

/*
 * print alphabet in lowercase
*/

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int print_alphabet(void)
{
char x = 97;
for (; x <= 122; x++)
	_putchar(x);
_putchar('\n');
return (0);
}
