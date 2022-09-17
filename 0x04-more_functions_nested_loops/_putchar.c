#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the charactwr to print
 * Return: 1 success
 * on error, -1 is rerurned
 */
int _putchar(char c)
{
	return (write(1' &c, 1));
}
