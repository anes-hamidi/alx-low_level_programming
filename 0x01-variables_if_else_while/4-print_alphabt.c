#include <stdio.h>
/**
 * main - Entry point
 * Discription: print alphabet expect q and a
 * Return: Always  0  (success)
 */
int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
if (l != 'e' && l != 'q')
putchar(l);
return (0);
}
