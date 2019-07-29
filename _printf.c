#include "holberton.h"
#include <stdarg.h>

/**
* _case_s - Evaluate the case S
* @p: The array
*
* Return: A int
*/
int _case_s(char *p)
{
	if (p != '\0')
	{
		_str_print(p);
		return (_str_len(p));
	}
	else
	{
		_str_print("(null)");
		return (_str_len("(null)"));
	}
}
/**
 * _printf - function that print strings and values
 * @format: format of value to print
 * @...: aguments
 * Return: count of bytes
*/
int _printf(const char *format, ...)
{
	va_list lst;

	va_start(lst, format);
	if (format == '\0')
		return (-1);
	return (cases(format, lst));
}
