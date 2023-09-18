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
int len = 0;
while (s[len] != '\0')
{
len++;
}
for (int i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
