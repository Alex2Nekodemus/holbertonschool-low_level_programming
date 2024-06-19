#include "main.h"

/**
 * _islower - entry point
 * description - Determine if the character is lowercase
 * @c: input, character
 * Return: 0 or 1.
 */
int _islower(int c)
{
int x;
x = ((c >= 97) && (c <= 122));
return (x);
}
