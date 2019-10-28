#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_decimal - print strings
 *@list: the list
 *@ver: fdfs
 *Return: char count
 */

int print_decimal(va_list *list, int ver)
{
	int s  = va_arg(*list, int);
	char *r = _tostring(s);

	s = 0;
	while (*(r) != '\0')
	{
		if (ver == 0)
		_put(*r);
		r++;
		s++;
	}
	return (s);
}
