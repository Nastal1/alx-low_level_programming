#include "main.h"
#include <stdio.h>
/**
 * Print_alphabet_x10 - Entry point
 * Description: 'the program prints all alphabrts x10'
 * Return: Nothing
*/

void Print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c < 'z'; c++;)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
