#include "main.h"
/**
 * rev_string - revers string
 * Description: function for reversing string
 * @s: pointer to string
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
int i;
int len;
while (s[len] != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
