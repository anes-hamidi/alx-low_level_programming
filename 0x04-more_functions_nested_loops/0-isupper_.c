#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: character value in assci
* Return: 1 if (upercase) otherwise 0
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
