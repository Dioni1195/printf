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
	int i = 0, cnt = 0;
	va_list lst;
	char *p;

	va_start(lst, format);

	if (format == '\0')
	{
		return (0);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(lst, int));
					cnt++;
					break;
				case 's':
					p = va_arg(lst, char *);
					_str_print(p);
					cnt += _str_len(p);
					break;
				case '%':
					_putchar('%');
					cnt++;
					break;
			}
		}
		else if (format[i - 1] != '%')
		{
			_putchar(format[i]);
			cnt++;
		}
		i++;
	}
	va_end(lst);
	return (cnt);
}
