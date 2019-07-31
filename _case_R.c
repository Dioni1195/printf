#include "holberton.h"
#include <stdlib.h>
/**
 * _rot13 - Desciphrate
 * @p: The array
 *
 * Return: Print a String.
 *
*/
char *_rot13(char *p)
{
	int i, j, c = 0;
	char *cpy;
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

	cpy = malloc(sizeof(char) * _str_len(p) + 1);
	if (cpy == NULL)
		return (NULL);
	while (p[c] != '\0')
	{
		cpy[c] = p[c];
		c++;
	}
	cpy[c] = '\0';
	for (i = 0; cpy[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (cpy[i] == let[j])
			{
				cpy[i] = rot[j];
				break;
			}
		}
	}
	return (cpy);
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
