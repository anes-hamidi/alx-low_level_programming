#include "main.h"
/**
 * strncpy - copy string
 * @dest: string 1
 * @src:string 2
 * @n: integer
 * Return: (dest)
*/
char *strncpy(char *dest, char *src, int i)
{
int len = 0;
while (len < n && src[len] != '\0')
{
dest[len] = src[len];
len++;
}
while (len < n)
{
dest[len] = '\0';
len++;
}
return (dest);
}
  
