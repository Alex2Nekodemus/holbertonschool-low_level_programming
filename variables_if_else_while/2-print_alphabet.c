#include <stdio.h>

/*
 * print alphabet in lowercase
*/

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char x = 97;
for (; x <= 122; x++)
	putchar(x);
putchar('\n');
return (0);
}
