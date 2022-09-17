#include "main.h"
#include "1-main.c"
/**
 * _isdigit - checks to see it is a dogit or alphabeth
 * Description: prints digit using _putchar
 * @c: character
 * Return: void
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
