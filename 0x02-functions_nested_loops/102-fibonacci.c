#include<stdio.h>
/**
 *main - prints 50 first fibonacci.
 */
void main(void)
{
long int a, b, r;
int i;

a = 1;
b = 2;
r = 0;
i = 0;
printf ("1, 2, ");
while (i <= 48)
{
r = a + b;
printf("%li", r);
i++;
if (i <= 47)
printf(", ");
a = b;
b = r;
}
 putchar('\n');
}
