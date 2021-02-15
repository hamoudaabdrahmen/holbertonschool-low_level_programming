#include "holberton.h"
/**
 * int _strlen - prints the lengh of a string
 * @s: the string to be dispayed
 */
int _strlen(char *s)
{
int i;
int count = 0;

for(i = 0; s[i] != '\0';i++)
{
count++;
}
return (count);
}
