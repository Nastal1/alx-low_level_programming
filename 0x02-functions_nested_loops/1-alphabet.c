#include "main.h"
#include <stdio.h>
/**
 * Print_alphabeth - function that prints a-z in lowercase followed by a new line'
 * Return: Nothing
*/
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha < 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
