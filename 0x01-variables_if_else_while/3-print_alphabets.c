#include <stdio.h>

int main()
{
    for(int x = 'A'; x <= 'Z'; x++) // jumps from 'A'(65) to 'B'(66) to ... in order.
    {
        putchar(tolower(x)); // the return value is returned as a parameter
    }
    putchar ('\n');
    for(int x = 'A'; x <= 'Z'; x++) // jumps from 'A'(65) to 'B'(66) to ... in order.
    {
        putchar((x)); // the return value is returned as a parameter
    }
    
    return 0;
}
