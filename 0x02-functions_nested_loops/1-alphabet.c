#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: print alphabet lowercase function
 * Return: Always 0 (success)
 */
void print_alphabet(void)
/* function for print all alphabet folowed by new line */
{
/* inisialize index variable */
int i;
/* loop over all alphabet character*/
for (i = 'a'; i <= 'z'; i++)
{
/* print all character */
_putchar(i);
}
/* print new line */
_putchar('\n');
}
