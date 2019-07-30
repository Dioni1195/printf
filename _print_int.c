#include "holberton.h"

/**
 * _ptr_nmb - Print numbers recurively
 * @n: Numbers to be printed
 * Return: The count of iteractions
 */
int _prt_nmb(int n)
{
	int i;

	if (n == 0)
		return (0);
	else
	{
		i = _prt_nmb(n / 10) + 1;
		_putchar(n % 10 + '0');
		return (i);
	}
}

/**
  * _print_int - Print a big number
  * @lst: The big number to be printed
  *
  * Return: The count of digits
*/
int _print_int( va_list lst)
{
	int cnt = _prt_nmb(lst);

	return (cnt);
}


