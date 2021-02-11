#include <stdio.h>
/**
 * _isdigit - return if digit or not.
 *@c: integer to be tested.
 *Return: 1 if true.
 */
int _isdigit(int c)
{
if ((c >= 48) && (c < 57))
{
return (1);
}
else
{
return (0);
}
}
