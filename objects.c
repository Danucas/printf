#include "holberton.h"
/**
 *get_funs - get funtioncs list
 *Return: list of functions
 */

print_t *get_funs()
{
	print_t ps[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_decimal},
		{'i', print_decimal},
		{'%', print_percent}
	};
	print_t *funs = ps;

	return (funs);
}
