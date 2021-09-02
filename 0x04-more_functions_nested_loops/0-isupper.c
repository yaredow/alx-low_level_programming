#include "main.h"
/**
  * _isupper- determines if a character is upper case
  * @c: that's the character we're checking
  *
  * Return: 1 if upper, 0 if otherwise
  */
int _isupper(int c)
{
if (c < 65 || c > 90)
	return (0);
else
	return (1);
}
