#include "holberton.h"
/**
 * _str_len - function that count the numbers of character in a string
 * @s: string
 * Return: int
*/

int _str_len(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
