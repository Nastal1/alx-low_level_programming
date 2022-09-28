#include "main.h"
/**
 * _pow_recursion - raises x to the power of y
 * @x: integer number
 * @y: Power
 * Return: on Success 1
 * on err, -1 is returned and
 * err no set appropriately
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
