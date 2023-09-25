#include "main.h"
/**
 * _memset - fill a block of memory
 * @s: pointer to char
 * @b: char
 * @n: size
 *
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
