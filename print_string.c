#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/**
 *print_string - print strings
 *@list: the list
 *@ver: verification state
 *Return: char count prints (null) if NULL
 */

int print_string(va_list *list, int ver)
{
	char  *s  = va_arg(*list, char *);
	int count = 0;

	if (s == NULL)
	{
		if (ver == 0)
			write(1, "(null)", 6);
		return (6);
	}
	while (*(s + count) != '\0')
	{
		if (ver == 0)
		_put(*(s + count));
		count++;
	}
	return (count);
}
