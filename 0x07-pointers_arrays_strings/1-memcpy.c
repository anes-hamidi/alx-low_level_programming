#include "main.h"
/**
 * _memcpy - function for copies memory area
 * @dest: memory area 1
 * @src: memory area 2
 * @n: byts
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int i = n;
for (; a < i; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
