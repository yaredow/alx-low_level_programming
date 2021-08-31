#include <main.h>

/**
 *
 * _isalpha - check weather input is alphabet or not 
 * Return: 1 for it is alphabet and 0 for it is not
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
	else 
	{
		
		return (0);
	}
}


