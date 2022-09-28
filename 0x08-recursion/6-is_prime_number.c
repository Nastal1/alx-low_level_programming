#include "main.h"
/**
 * prime2 - makes possible to evaluate from 1 to n.
 * @a: same number as n
 * @b: number iterating from 1 to n.
 * Return: on Success 1.
 * on err, -1 is returned and
 * error no. set appropriately
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: integer number
 * Return: on Success 1.
 * on err, -1 is returned and
 * err no. is set appropriately
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
