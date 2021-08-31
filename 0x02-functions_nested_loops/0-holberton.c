#include "main.h"

/**
* main - Print the word "Holberton"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i=0;
	char p[] = "Holberton";

	while  (i<=9)
		{
		_putchar(p[i]);
		p[i]++;
		}
	return (0);
}

