#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and then uppercase
 * Return: 0 (success)
*/
int main(void)
{
char lL, uL;
for (lL = 'a'; lL < 'z'; lL++)
putchar(lL);
for (uL = 'A'; uL < 'Z'; uL++)
putchar(uL);
putchar('\n');
return (0);
}
