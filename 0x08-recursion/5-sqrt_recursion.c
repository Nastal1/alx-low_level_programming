#include "main.h"
/**
 * sqrt2 - makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: on Sucess 1.
 * on err, return -1 and err no set appropriately
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns natural square root of n
 * @n: integer no.
 * Return: on Success 1.
 * on err, -1 is returned and err no. is set appropriately
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
