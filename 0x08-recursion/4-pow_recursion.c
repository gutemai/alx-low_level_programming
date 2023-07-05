#include "main.h"
/**
 *_pow_recursion - funct returns the value of x raised to the power of y
 *@x: integer that have power
 *@y: integer num of that power
 *Return: -1 when -ve  , 1 when  zero and num with power num when +ve.
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
