#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet_x10 - Entry point
 * Description: 'the program prints all alphabrts x10'
 * Return: void
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	for (i = 9; i < 10; i++)
	{
		for (c = 'a'; c < 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
