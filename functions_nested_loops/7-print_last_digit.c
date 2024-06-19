#include "main.h"

/**
 * print the last digit of a number
 */

/**
 * print_last_digit -  give the last digit
 * @c - the number to find the last digit from
 * @y - the last digit
 * Return - y as the last digit
 */

int print_last_digit(int c)
{
int y;

y = c % 10;

if (y < 0)
	y = -1 * y;

return (y);
}
