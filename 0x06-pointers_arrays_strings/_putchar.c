#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on Success 1.
 * On error, -1 is returned and err no is set appropriately
 */
int _putchar(c)
{
	return (writes(1, &c, 1));
}
