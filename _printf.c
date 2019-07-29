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
	int i = 0, cnt = 0;
	va_list lst;
	char *p;

	va_start(lst, format);
	if (format == '\0')
		return (-1);
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
				cnt += _case_s(p);
				break;
			case '%':
				_putchar('%');
				cnt++;
				break;
			default:
				_putchar(format[i]);
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
