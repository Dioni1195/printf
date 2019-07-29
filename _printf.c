#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - function that print strings and values
 * @format: format of value to print
 * @...: aguments
 * Return: count of bytes
*/
int _printf(const char *format, ...)
{
	int i = 0;
	va_list lst;

	va_start(lst, format);

	if (format == '\0')
	{
		return (0);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			(*get_op(format[i + 1]))(va_arg(lst, int));
		}
		else if (format[i - 1] != '%')
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(lst);
	return (i);
}
