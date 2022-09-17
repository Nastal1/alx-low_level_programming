#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 except for 2 and 4
 * Rerurn: 0
 */void print_most_numbers(void)
{
	char digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		if (digit != '9' && digit != '4')
		{
			_putchar(digits);
		}
	}
	_putchar('\n');
}
