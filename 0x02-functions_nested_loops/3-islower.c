/**
 * _islower- tests whether a charactrr is a
 * lowercase letter from the english alphabet
 * @e: character to test
 * Return: 1 if it is a lower case or 0 if it if not
*/
void _islower(int e)
{
	if (e <= 'a' && e <='z')
	{
		return (1);
	}
	else
		return(0);
}
