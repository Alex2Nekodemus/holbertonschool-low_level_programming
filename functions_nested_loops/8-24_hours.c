#include "main.h"

/**
 * jack_bauer -  count to 24hours
 * Return - nothing
 */
void jack_bauer(void)
{
int i, j, k, l;


for (i = 0; i <= 2; i++)
{
	if (i == 2)
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(58);
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar(10);
				}
		}
	else
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(58);
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar(10);
				}
		}
}

return;
}
