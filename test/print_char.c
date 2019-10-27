#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>


int print_char(va_list *list)
{
	int k;
	if (list == NULL)
	{
		printf ("char is null\n");
		return (0);
	}
	k =va_arg(*list, int);
	_put (k);
	return (0);
}
