#include "main.h"

/**
 * print_sign - entry point
 * description - determine the sign of a number
 * @n:  input to be dertermined
 * Return: -1, 0 or 1.
 */
int print_sign(int n)
{
int x;

if (n > 0)
{
	_putchar(43);
	x = 1;
}

if (n == 0)
{
	_putchar(48);
	x = 0;
}

if (n < 0)
{
	_putchar(45);
	x = -1;
}

return (x);
}
