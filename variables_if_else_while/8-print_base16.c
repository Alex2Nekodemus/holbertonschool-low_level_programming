#include <stdio.h>

/*
 * print single digit numbers of base 10
*/

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char x;
for (x = 48; x <= 57; x++)
	putchar(x);
for (x = 97; x <= 102; x++)
	putchar(x);
putchar('\n');
return (0);
}
