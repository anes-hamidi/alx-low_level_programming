/**
 * _strlen - function for returns the length of a string
 * Description: calculate length of a string
 * @s: pointer to a char variable
 * @i: counter
 * Return: counter
 */
int _strlen(char *s)
{
int i;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
