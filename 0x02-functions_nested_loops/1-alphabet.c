#include "main.h"
#include <stdio.h>
/**
 * print_alphabeth - function that prints a-z in lowercase followed by a new line'
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alpha = 'a';

	while (alpha < 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
