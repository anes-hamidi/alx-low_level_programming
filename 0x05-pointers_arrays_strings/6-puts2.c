#include "main.h"
/**
 * puts2 - print one and skip one
 * Description: function for printing one character and skip one
 * @str: pointer to a string
 */
void puts2(char *str)
{
int n, i;
n = 0;
while (str[n] != '\0')
{
n++;
}
for (i = 0; i < n; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
