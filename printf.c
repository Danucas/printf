#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
/**
 *_printf - the printf
 *@format: fsfsaoj
 *Return: characters printed
 */
int _printf(const char *format, ...)
{
	va_list op, *ap;
	unsigned int char_c = 0;
	int i = 0, forml = 0, flags = 0;
	int (*function)(va_list *);

	va_start(op, format);
	ap = &op;
	while (format[forml] != '\0')
	{
		forml++;
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			function = handler(format[i + 1]);
			char_c += function(ap);
			flags += 1;
			i += 2;
		}
		if (i <= forml)
		{
			if (format[i] == '\0')
			break;
		_put(format[i]);
		i++;
		char_c++;
		}
		else
		{
			break;
		}
	}
/*	char_c -= flags;*/
	return (char_c);
}
