/**
 * _strlen - function for returns the length of a string
 * Description: calculate length of a string
 * @s: pointer to a char variable
 * Return: counter
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
