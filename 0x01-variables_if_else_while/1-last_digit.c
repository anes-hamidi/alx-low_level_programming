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
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastDigit = n % 10;
printf("Last digit of %d is %d ", n, lastDigit);
if (lastDigit > 5)
{
printf("and is greater than 5");
}
else if (lastDigit == 0)
{
printf("and is 0");
}
else
{
printf("and is less than 6 and not 0");
}
printf("\n");
return (0);
}
