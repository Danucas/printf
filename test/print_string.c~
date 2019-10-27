#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>


int print_string(va_list *list)
{
	char  *s  = va_arg(*list, char *);
	int count = 0;
	while (*(s + count) != '\0')
	{
		_put(*(s + count));
		count++;
	}
	return (count);
}
