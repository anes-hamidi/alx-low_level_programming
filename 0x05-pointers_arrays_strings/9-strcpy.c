/**
 * *_strcpy - copy string
 * Description:  function that copies the string pointed to by src
 * @dest: pointerto the buffer
 * @src: string
 * Return: dest pointer
 */
void *_strcpy(char *dest, char *src)
{
int en, i;
en = 0;
while (src[en] ! = '\0')
{
en++;
}
for (i = 0; i < en; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
