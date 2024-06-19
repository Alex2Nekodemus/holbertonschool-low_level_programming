#include "main.h"

/*
 * print_to_98 - print integers between n and 98
 *
 * @n - input
 *
 * return - Nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		int i, j, k = 0;
		int l = n;

		if (l < 0)
			l = (-1 * l);

		i = (l / 100);
		j = (l / 10);
		k = (l % 10);
		if ((n == (-1 * l)) && (l != 0))
			_putchar(45);

		if (i != 0)
			_putchar('0' + i);

		if (j != 0)
		{
			j = (j % 10);
			_putchar('0' + j);
		}

		_putchar('0' + k);
		_putchar(44);
		_putchar(32);
		if (n > 98)
			n--;
		if (n < 98)
			n++;

	}
	_putchar('9');
	_putchar('8');
	_putchar(10);
}
