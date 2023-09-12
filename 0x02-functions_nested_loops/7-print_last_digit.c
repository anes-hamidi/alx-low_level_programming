#include "main.h"

/**
 * print_last_digit - Entry point
 * @val: integer value
 * Return: value
 */
int print_last_digit(int val)
{
int i = (val % 10);
if (i < 0)
{
i *= -1;
}
_putchar(i + '0');
return (i);
}
