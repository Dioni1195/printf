#include "holberton.h"

/**
  * _prt_nmb - Print numbers recurively
  * @n: Numbers to be printed
  * Return: The count of iteractions
  */
int _prt_nmb(unsigned int n)
{
	int i;

	if (n == 0)
	{
		return (0);
	}
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
int _print_int(int lst)
{
	int cnt = 0;

	if (lst < 0)
	{
		_putchar('-');
		cnt = _prt_nmb(lst * -1);
		cnt++;
	}
	else if (lst == 0)
	{
		_putchar(0 + '0');
		cnt++;
	}
	else
		cnt = _prt_nmb(lst);
	return (cnt);
}
