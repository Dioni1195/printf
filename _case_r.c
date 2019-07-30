#include <stdarg.h>
#include "holberton.h"

/**
 * _rev -  prints a string in reverse
 * @p: char
 * Return: void.
 */
void _rev(char *p)
{
	int count = 0;
	int i = 0;
	int j;

	while (p[i] != 0)
	{
		count++;
		i++;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(p[j]);
	}
}
/**
* _case_r - Evaluate the case S
* @p: The array
*
* Return: int
*/
int _case_r(char *p)
{
	if (p != '\0')
	{
		_rev(p);
		return (_str_len(p));
	}
	else
	{
		_str_print("(null)");
		return (_str_len("(null)"));
	}
}
