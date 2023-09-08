#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: a c programe check the value of last digit in a given number 
 * print value is positive or negative or equal 0
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int lastDigit = n % 10;
if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
}
return (0);
}
