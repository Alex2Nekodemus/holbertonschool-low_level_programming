#include "main.h"

/**
 * times_table -  display time table
 * Return - nothing
 */
void times_table(void)
{
int i, j, x, y, z = 0;

for (j = 0; j <= 9; j++)
{
	_putchar(0);
	_putchar(44);

	for (i = 1; i <= 9; i++)
	{
		_putchar(32);
		y = (j * i);
		x = (y / 10);
		z = (y % 10);
		if (x == 0)
			_putchar(32);
		else
			_putchar('0' + x);

		_putchar('0' + z);
		if (i != 9)
			_putchar(44);
	}
	_putchar(10);
}

return;
}
