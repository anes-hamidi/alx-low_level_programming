#include "main.h"
/**
 * print_rev - function for revers string
 * Description: revers string
 * @s: pointer to a string variable
 */
void print_rev(char *s)
{
int j = 0;
while (s[j] != '\0')
{
j++;
}
int i;
for (i = j - 1; i >= 0; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
