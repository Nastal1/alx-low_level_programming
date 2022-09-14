#include "main.h"
/**
 * times_table - prints the nine tables
 * Description: prints all the tables
 * Return: Always (0);
*/
void times_table(void)
{
	int i, j, item;

	for (i = 0; j < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			product = i * j;
			_putchar(' ');
			_putchar(' ');
			if (product >= 10)
			{
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(product + 48);
			}
		}
		_putchar('\n');
	}
}
