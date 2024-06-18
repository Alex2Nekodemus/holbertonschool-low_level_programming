#include "main.h"

/*
 * determine if lowercase or not
 */

/**
 * _islower - entry point 
 * parameter c  - int c is the ASCII of the character
 * Return: 0 or 1.
 */
int _islower(int c)
{
int x;
x = ((c >= 97) && (c <= 122));
return (x);
}
