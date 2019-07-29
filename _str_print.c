#include "holberton.h"
/**
* _str_print - Print a string of chars
* @s: The array
*
* Return: Nothing
*/
int _str_print(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
