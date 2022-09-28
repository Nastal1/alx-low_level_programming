#include "main.h"
/**
 * postfix_match - Checks if a string str matches the postfix of
 * another string potentially containing wildcards.
 * @str: The string to be matched.
 * @postfix: The postfix.
 * Return: If str and postfix are identical - a pointer to the null byte
 * located at the end of postfix.
 * Otherwise - a pointer to the first unmatched character in postfix.
 */
char postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) -1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\n')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}
