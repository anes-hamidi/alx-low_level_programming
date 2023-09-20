#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * @n: byte
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int len = 0;
int i;
while (dest[len] != '\0')
{
len++;
}
for (i = 0; i < n; i++)
{
if (src[i] != '\0')
{
break;
}
dest[len + 1] = src[i];
}
dest[len + 1] = '\0';
return (dest);
}
