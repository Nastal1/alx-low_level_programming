#include "main.h"
/**
 * iterate_wild - Iterates through a string located at a wildcard
 * until it points to a non-wildcard character.
 * @wildstr: The string to be iterated through.
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}
