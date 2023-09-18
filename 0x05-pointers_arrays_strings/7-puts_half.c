#include "main.h"
/**
 * puts_half - half of string
 * Description:function for printing half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
int en, n, i;
en = 0;
while (str[en] != 0)
{
en++;
}
if (en % 2 == 0)
{
for (i = en / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (en % 2)
{
for (n = (en - 1) / 2; n < en - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}

