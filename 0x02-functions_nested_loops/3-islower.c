#include <main.h>
/**
 * _islower- prints 1 if c is  lowercase and 0 if c is not lowercase
 *
 */

int _islower(int c)
{
	char c;
	if(c >= 97 && <=122 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
