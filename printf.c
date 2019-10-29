#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int checklist(va_list *ap, const char *format);
/**
 *_printf - the printf
 *@format: fsfsaoj
 *Return: characters printed
 */
int _printf(const char *format, ...)
{
	va_list op, *ap, te;
	unsigned int char_c = 0;
	int i = 0, (*function)(va_list *, int), ver = 1;

	va_start(op, format);
	va_copy(te, op);
	if (!format || (format[1] == '\0' && format[0] == '%'))
		return (-1);
	ap = &op;
	checklist(&te, format);
	ver = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			function = handler(format[i]);
			if (function != NULL)
			{
				char_c += function(ap, ver);
				i += 1;
			}
			else
			{
				_put('%');
				char_c++;
				}
		}
		if (format[i] == '\0')
			break;
		if (format[i] != '%')
		{
		_put(format[i]);
		char_c++;
		i++;
		}
	}
	va_end(op);
	return (char_c);
}
/**
 *checklist - the printf
 *@ap: fsfsaoj
 *@format: fdsf
 *Return: characters printed
 */
int checklist(va_list *ap, const char *format)
{
	int (*f)(va_list *, int);
	int c;
	int i;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			f = handler(format[i + 1]);
			if (f != NULL)
			{
				c = f(ap, 1);
			}
		}
	}
	return (c);
}
