#include <stdio.>
/**
 *main - prints the size of char,int,longlong int .float
 *return: 0 if succeed
 */
int main (void)
  {
    char f;
    int g;
    long int h;
    long long int i;
    float j;
    printf("Size of  char: %d byte(s)\n", sizeof(f));
    printf("Size of  an integer: %d byte(s)\n", sizeof(g));
    printf("Size of long int: %d byte(s)\n", sizeof(h));
    printf("Size of long long int: %d byte(s)\n", sizeof(i));
    printf("Size of float: %d byte(s)\n", sizeof(j));
    return(0);
    }
