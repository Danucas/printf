#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *get_int_length - print strings
 *@res: the list
 *@factor: the list
 *@sign: the list
 *@n: the list
 *@j: counter
 *@k: int length
 *Return: char count
 */

char *get_int_length(int *res, int *factor, char *sign, int *n, int *j, int *k)
{
	char *ch;
	int i = *k;

	if (*n < 0)
		*res *= -1;
	*res /= 10;
	for (i = 1; *res > 0; i++)
	{
		*factor *= 10;
		*res /= 10;
	}
	if (*n < 0)
	{
		*sign = '-';
		i++;
		*j = 1;
	}
	else
	{
		*j = 0;
	}
	ch = malloc((i + 1) * sizeof(char));
	if (ch == NULL)
		return (NULL);
	if (*n < 0)
	{
		ch[0] = *sign;
		*n *= -1;
	}
	*k = i;
	return (ch);
}
/**
 *_tostring - print strings
 *@n: the list
 *Return: char count
 */

char *_tostring(int n)
{
	int factor = 1, i, j, res = n;
	char *ch;
	char sign;

	ch = get_int_length(&res, &factor, &sign, &n, &j, &i);


	for (j = j; j <= i; j++)
	{
		if (n > 9)
		{
			res = n / 10;
			n = n % factor;
			while (res > 9)
				res /= 10;
		}
		else
		{
			res = n;
		}
		factor /= 10;
		if (n < factor)
		{
			ch[j] = '0' + res;
			ch[j + 1] = '0';
			factor /= 10;
			j++;
		}
		else
		{
			ch[j] =  '0' + res;
		}
	}
	ch[i] = '\0';

	return (ch);
}
