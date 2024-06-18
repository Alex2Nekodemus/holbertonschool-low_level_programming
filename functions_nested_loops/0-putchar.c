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
        char x[10] = {95, 112, 117, 116, 99, 104, 97, 114, 10};
        int i;

        for (i = 0; i < 9; i++)
               _putchar(x[i]);

	return (0);
}
