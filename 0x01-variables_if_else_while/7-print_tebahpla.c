#include <stdio.h>
/**
 * main - Entry point
 * Discription: print alphabet in reverse
 * Return: Always  0  (success)
 */
int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}
