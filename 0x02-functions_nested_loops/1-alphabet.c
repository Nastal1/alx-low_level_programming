#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints a-z in lowercase followed by a new line
 *Description: 'prints new line'
 * Return: Nothing
*/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	putchar('\n');
}
