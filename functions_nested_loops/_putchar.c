#include <stdio.h>
/*
 *print _putchar only with putchar
*/

/**
* _putchar - Function
* Return: Always 0 (Success)
*/
int functionPutchar(void)
{
	char x[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(x[i]);

	putchar('\n');
	return (0);
}
