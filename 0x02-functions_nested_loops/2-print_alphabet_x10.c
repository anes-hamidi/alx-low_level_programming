#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: function for printing 10 file of alphabet
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
int i;
i = 0;
while (i < 10)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
i++;
}
}
