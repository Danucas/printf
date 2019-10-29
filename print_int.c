#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *print_dec - fdsfd
 *@list: fdsf
 *@n: state
 *Return: count
 */
int print_dec(va_list *list, int n)
{
	long int digits, factor,  i = 0;

	digits = va_arg(*list, int);
	if (digits == 0)
	{
		if (n == 0)
		_put('0');
		i = 1;
	}
	else if (digits < 0)
	{
		if (n == 0)
		_put('-');
		digits *= -1;
		i = 1;
	}
	if (digits > 0)
	{
		factor = 1;
		while (factor <= digits)
		{
			factor *= 10;
		}
		while (factor > 1)
		{
			factor /= 10;
			if (n == 0)
			_put('0' + (digits / factor));
			digits %= factor;
			i++;
		}
	}
	return (i);
}
