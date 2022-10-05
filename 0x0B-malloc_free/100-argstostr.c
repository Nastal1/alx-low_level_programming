#include "main.h"
/**
 * argstostr - Concats argv to new string
 * @ac: Argument count
 * @av: Arguments
 * Return: Returns a pointer to a new string,NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *newString = NULL;
	int k = 0, i = ac, j, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
		sum += (len(av[ac]) + 1);
	newString = (char *) malloc(sum + 1);
	if (newString != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				newString[j + temp] = av[k][j];
			newString[temp + j] = '\n'
				;
			tem += (j + 1);
			k++;
		}
		newString[temp] = '\0'
			;
	}
	else
	{
		return (NULL);
	}
	return (newString);
}
/**
 * len - returns length of str
 * @str: string counted
 * Return: returns the length
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
