#include "main.h"
/**
 * rev_string - revers string
 * Description: function for reversing string
 * @s: pointer to string
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
char t;
int i, l, n;
l = 0;
n = 0;
while (s[l] != '\0')
{
l++;
}
n = l - 1;
for (i = 0; i < l / 2; i++)
{
t = s[i];
s[i] = s[n];
s[n--] = t;
}
}
