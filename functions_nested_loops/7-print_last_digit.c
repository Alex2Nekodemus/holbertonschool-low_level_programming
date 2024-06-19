#include "main.h"

/**
 * print_last_digit - Give the last digit of a number
 * @c: The number to find the last digit from
 *
 * Return: y as the last digit
 */
int print_last_digit(int c)
{
	int y;

	y = (c % 10);
	if (y < 0)
		y = (-1 * y);

	_putchar('0' + y);
	return (y);
}
