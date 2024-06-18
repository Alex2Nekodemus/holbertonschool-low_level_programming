#include <stdio.h>

/*
 * print alphabet in lowercase and in uppercase
*/

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char x;
for (x = 97; x <= 122; x++)
	putchar(x);
for (x = 65; x <= 90; x++)
	putchar(x);
putchar('\n');
return (0);
}
