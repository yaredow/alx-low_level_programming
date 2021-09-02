#include <main.h>

/**
 * _isupper - checkes for uppercase
 * @c: the character
 *
 * Return: 1 if it is a success and 0 if it is not
 *
 */

int _isupper(int c) {
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else {
		return (0);
	}
}
