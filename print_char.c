#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_char - print characters
 *@list: the  argument list
 *@ver: verification state
 *Return: char count
 */

int print_char(va_list *list, int ver)
{
	unsigned char k;

	k = (unsigned char) va_arg(*list, int);
	if (ver == 0)
		_put(k);
	return (1);
}
