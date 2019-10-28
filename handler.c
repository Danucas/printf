#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
/**
 *handler - mfkodasfd
 *@c: the char
 *Return:  function to the correct action
 */
int (*handler(char c))(va_list *, int)
{
	int i = 0;
	print_t *funs = get_funs();

	while (i < 11)
	{
		if (funs[i].joker == c)
		{
			return (funs[i].fun);
		}
		i++;
	}
	return (NULL);

}
