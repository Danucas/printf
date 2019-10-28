#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/**
 *print_string - print strings
 *@list: the list
 *Return: char count
 */

int print_string(va_list *list)
{
	char  *s  = va_arg(*list, char *);
	int count = 0;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*(s + count) != '\0')
	{
		_put(*(s + count));
		count++;
	}
	return (count);
}
