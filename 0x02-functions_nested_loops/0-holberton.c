#include "holberton.h"
/**
 *main - prints Holberton, followed by a new line
 *
 *Return: int (0)
 */
int main()
{
int i;
char t[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};

for (i = 0; i < 10; i++)
{
_putchar(t[i]);
}
return (0);
}
