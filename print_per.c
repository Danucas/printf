#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_percent - print strings
 *@list: the list
 *@ver: fdsf
 *Return: char count
 */

int print_percent(va_list *list, int ver)
{
	(void) list;
	if (ver == 0)
	_put('%');
	return (1);
}
