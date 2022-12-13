#include "main.h"

/**
 ** _isalpha - prints one or zero depending on input
 ** @c: collects a char type
 ** Description: Chrcks for alphabets lower and uppercase
 ** Return: Always (0)
 **/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
