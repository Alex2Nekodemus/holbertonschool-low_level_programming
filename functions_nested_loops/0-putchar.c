#include <stdio.h>
#include "main.h"
/*
 *print _putchar with a function
*/

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
        char x[9] = "_putchar";
        int i;

        for (i = 0; i < 8; i++)
                putchar(x[i]);

        putchar('\n');
	return (0);
}
