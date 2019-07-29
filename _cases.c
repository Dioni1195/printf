#include <stdarg.h>
#include "holberton.h"

/**
* cases - Evaluate the cases
* @format: The format to print
* @lst: The variable list
*
* Return: A integer
*/

int cases(const char *format, va_list lst)
{
	int i = 0, cnt = 0;
	char *p;

	while (format[i] != '\0')
	{
		if (format[i + 1] == '\0' && format[i] == '%')
			return (cnt = -1);
		else if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(lst, int));
					cnt++, i++;
					break;
				case 's':
					p = va_arg(lst, char *);
					cnt += _case_s(p);
					i++;
					break;
				case '%':
					_putchar('%');
					i++, cnt++;
					break;
				default:
					_putchar(format[i]);
					cnt++;
					break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			cnt++;
			i++;
		}
	}
	va_end(lst);
	return (cnt);
}
