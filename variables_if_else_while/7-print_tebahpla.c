#include <stdio.h>

/*
 * print reverse alphabet in lowercase
*/

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char x = 122;
for (; x >= 97; x--)
	putchar(x);
putchar('\n');
return (0);
}
