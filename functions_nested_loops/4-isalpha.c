#include "main.h"

/*
 * determine if is an alphabetic character
 */

/**
 * _isalpha - entry point
 * int c  - the ASCII of the character
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
int x;
x = (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)));
return (x);
}
