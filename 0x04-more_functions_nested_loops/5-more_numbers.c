#include "main.h"
/**
 * more_numbers - prinys 10 times tje number from zero to 14
 */
void more_numbers(void)
{
	int replay, count;

	for (replay = '0'; replay <= 9; replay++)
	{
		for (count = '0'; count <= '14'; count++)
		{
			if (count >= '10' && count <= '14')
			{
				_putchar((count / 10) + '0');
			}
			_putchar((count % 10) + '0');
		}
		_putchar('\n');
	}
}
