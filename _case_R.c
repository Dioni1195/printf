#include "holberton.h"

/**
 * _rot13 - Desciphrate
 * @p: The array
 *
 * Return: Print a String.
 *
*/
char *_rot13(char *p)
{
	int i, j;
	char let[52] = {'a',
		'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o',
		'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'A', 'B', 'C',
		'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q',
		'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z'};
	char rot[52] = {'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B',
		'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M'};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (p[i] == let[j])
			{
				p[i] = rot[j];
				break;
			}
		}
	}
	return (p);
}

/**
 * _case_R - Evaluate the case S
 * @p: The array
 *
 * Return: A int
*/
int _case_R(char *p)
{
	if (p != '\0')
	{
		_str_print(_rot13(p));
		return (_str_len(p));
	}
	else
	{
		_str_print("(null)");
		return (_str_len("(null)"));
	}
}
