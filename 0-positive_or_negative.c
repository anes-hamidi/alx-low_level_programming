#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: check number if positive or negative or 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	  {
	    printf("%d is positive", n);
	  }else if(n == 0)
	  {
	    printf("%d is zero", n);
	  }else
	  {
	    printf("%d is negative", n);

	  }
	return (0);
}
