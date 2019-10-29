#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include "holberton.h"

/**
 *get_int_length - print strings
 *@factor: the list
 *@sign: the list
 *@n: the list
 *@j: counter
 *@k: int length
 *Return: char count
 */

char *get_int_length(int *factor, char *sign, int *n, int *j, int *k)
{

	char *ch;
	int i = *k;
	int r;
	if (*n < 0)
	{
		*n = *n * (-1);
		*sign = '-';
		i++;
		*j = 1;


	}
	else
	{
		*j = 0;
	}
	r = *n;

	r /= 10;

	for (i = 1; r > 0; i++)
	{
		*factor *= 10;
		r /= 10;
	}
	ch = malloc((i + 1) * sizeof(char));
	if (ch == NULL)
		return (NULL);
	if (*sign == '-')
	{
		ch[0] = *sign;
		i++;
	}
	*k = i;
	return (ch);
}
/**
 *get_uint_length - print strings
 *@factor: the list
 *@sign: the list
 *@n: the list
 *@j: counter
 *@k: int length
 *Return: char count
 */

char *get_uint_length(int *factor, char *sign, int *n, int *j, int *k)
{

	char *ch;
	int i = *k;
	int r;
	r = (unsigned int) *n;
	printf("uint: %u %d\n", r, *n);
	if (r < 0)
	{
		r -= 1;
		*sign = '-';
		i++;
		*j = 1;
	}
	else
	{
		i++;
		*j = 0;
	}
	r /= 10;

	for (i = i; r > 0; i++)
	{
		*factor *= 10;
		r /= 10;
	}
	ch = malloc((i + 1) * sizeof(char));
	if (ch == NULL)
		return (NULL);
	if (*sign == '-')
	{
		ch[0] = *sign;
		i++;
	}
	*k = i;
	return (ch);
}
/*char *set_int()
{
	res = u;
	fac = (unsigned int) factor;
	setbuf(stdout, NULL);

	for (j = j; j <= i; j++)
	{
		if (u > 9)
		{
			res = u / 10;
			while (res > 10)
			{
				res /= 10;
			}
			u = u % fac;
		}
		else
		{
			res = u;
		}
		fac /= 10;
		if (u < fac)
		{
			ch[j] = '0' + res;
			ch[j + 1] = '0';
			fac /= 10;
			j++;
		}
		else
			ch[j] =  '0' + res;
	}
	ch[i] = '\0';
	return (ch);
}*/
/**
 *_tostring - print strings
 *@n: the list
 *Return: char count
 */

char *_tostring(int n)
{
	int factor = 1, i = 0, j;
	unsigned int res, u, fac;
	char *ch, sign = '\0';

	if ((unsigned int) n >= INT_MAX)
		ch = get_uint_length(&factor, &sign, &n, &j, &i);
	else
		ch = get_int_length(&factor, &sign, &n, &j, &i);
        u = (unsigned int ) n;
	if (u < UINT_MAX)
	{
		if ((int)u < INT_MAX && (int) u != INT_MIN)
			printf("lower than INT_MAX %d %d\n", (int)u, i);
	}
	else
		u += 2;
	res = u;
	fac = (unsigned int) factor;
	setbuf(stdout, NULL);

	for (j = j; j <= i; j++)
	{
		if (u > 9)
		{
			res = u / 10;
			while (res > 10)
			{
				res /= 10;
			}
			u = u % fac;
		}
		else
		{
			res = u;
		}
		fac /= 10;
		if (u < fac)
		{
			ch[j] = '0' + res;
			ch[j + 1] = '0';
			fac /= 10;
			j++;
		}
		else
			ch[j] =  '0' + res;
	}
	ch[i] = '\0';
	if (n == 0)
		return ("0");
	return (ch);
}
