#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>


int print_decimal(va_list *list)
{
	int s  = va_arg(*list, int);
        printf("%d %i %x", s, s, s);
	return (0);
}
