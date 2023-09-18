#include "main.h"
/**
 * print_rev - function for revers string
 * Description: revers string
 * @s: pointer to a string variable
 */
void print_rev(char *s) {
int len = 0;
while (s[len] != '\0') {
len++; 
}
for (int i = len - 1; i >= 0; i--) {
putchar( s[i]); 
}
putchar('\n');
}
