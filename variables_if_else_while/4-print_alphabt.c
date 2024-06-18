#include <stdio.h>

/*
 * print alphabet in lowercase without q and e
*/

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char x;
for (x = 97; x <= 122; x++)
	if ((x != 101) && (x != 113))
		putchar(x);
putchar('\n');
return (0);
}
