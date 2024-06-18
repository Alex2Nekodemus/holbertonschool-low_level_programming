#include <stdio.h>

/*
 * print single digit numbers of base 10 without char variable
*/

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 0; x <= 9; x++)
	putchar(48 + x);
putchar('\n');
return (0);
}
