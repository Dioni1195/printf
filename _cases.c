#include <stdarg.h>
#include "holberton.h"

/**
* dflt - Evaluate the cases
* @ch: character to print
* @lst: The variable list
*
* Return: A integer pointer
*/

int *dflt(const char ch, va_list lst)
{
	int cnt = 0, i = 0, arr[2], *ptr;
	char *p;

	ptr = arr;

	switch (ch)
	{
	case 'c':
		_putchar(va_arg(lst, int)), cnt++, i++;
		break;
	case 's':
		p = va_arg(lst, char *), cnt += _case_s(p), i++;
		break;
	case '%':
		_putchar('%'), i++, cnt++;
		break;
	case 'd':
		cnt += _print_int(va_arg(lst, int)), i++;
		break;
	case 'i':
		cnt += _print_int(va_arg(lst, int)), i++;
		break;
	case 'r':
		p = va_arg(lst, char *), cnt += _case_r(p), i++;
		break;
	case 'R':
		p = va_arg(lst, char *), cnt += _case_R(p), i++;
		break;
	default:
		_putchar('%'), cnt++;
		break;
	}
	i++;
	arr[0] = cnt;
	arr[1] = i;
	return (ptr);
}

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
	int *p;

	while (format[i] != '\0')
	{
		if (format[i + 1] == '\0' && format[i] == '%')
			return (cnt = -1);
		else if (format[i] == '%')
		{
			p = dflt(format[i + 1], lst);
			i += p[1];
			cnt += p[0];
		}
		else
			_putchar(format[i]), cnt++, i++;
	}
	va_end(lst);
	return (cnt);
}
