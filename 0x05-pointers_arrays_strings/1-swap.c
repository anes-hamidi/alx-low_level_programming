/**
 * swap_int - function for swap 2 variable with pointer
 * Description: swap value
 * @a: address for variable one
 * @b: address for variable two
 */
void swap_int(int *a, int *b)
{
int c;
int *d = &c;
*d = *a;
*a = *b;
*b = *d;
}
