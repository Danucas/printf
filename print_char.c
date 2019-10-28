#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_char - print strings
 *@list: the list
 *Return: char count
 */

int print_char(va_list *list)
{
	unsigned char k;

	k = (unsigned char) va_arg(*list, int);
	_put(k);
	return (1);
}
