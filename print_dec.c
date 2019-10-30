#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_decimal - deciman numbers
 *@list: the list
 *@ver: verification state
 *Return: char count
 */

int print_decimal(va_list *list, int ver)
{
	int s  = va_arg(*list, int), i = 0;
	char *r = _tostring(s);

	i = 0;
	while (*(r + i) != '\0')
	{
		if (ver == 0)
			_put(*(r + i));
		i++;
	}
	free(r);
	return (i);
}
