#include <stdarg.h>
#include "holberton.h"
/**
  * *get_op - Get the fucntion
  * @s: The operator
  *
  * Return: A pointer to a function
  * On error, terun NULL
  */
int (*get_op(char *s))(va_list)
{
	op_t menu[] = {
		{'s', _str_print},
		{'c', _putchar},
		{'%', _putchar},
	};
	int i;

	i = 0;
	while ( i < 3)
	{
		if (menu[i].op == s)
		{
			return (menu[i].f);
		}
		i++;
	}
	return ('\0');
}

