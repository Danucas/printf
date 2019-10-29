#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *get_len - print strings
 *@n: the list
 *@factor: das
 *@res: dsa
 *@tosum: dsa
 *@j:dsa
 *@sign:dsa
 *Return: char count
 */

int get_len(int *factor, int *res, int *n, int *tosum, int *j, char *sign)
{
	int i = 0;

	if (*n < 0)
	{
		if (*n <= INT_MIN)
			*res -= 1;
		else
			*res *= -1;
	}
	*res /= 10;
	for (i = 1; *res > 0; i++)
	{
		*factor *= 10;
		*res /= 10;
	}
	if (*n < 0)
	{
		if (*n <= INT_MIN)
		{
			*n = (*n + 1) * -1;
			*tosum = 1;
		}
		else
		{
			*n *= -1;
		}
		*sign = '-';
		i++;
		*j = 1;
	}
	else
	{
		*j = 0;
	}
	return (i);
}
/**
 *_tostring - print strings
 *@n: the list
 *Return: char count
 */

char *_tostring(int n)
{
	int factor = 1, i, j, res = n, tosum = 0;
	char *ch, sign;

	i = get_len(&factor, &res, &n, &tosum, &j, &sign);
	ch = malloc((i + 1) * sizeof(char));
	if (ch == NULL)
		return (NULL);
	if (sign == '-')
	{
		ch[0] = sign;
	}
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
			ch[j] =  '0' + res;
		if (j == i - 1 && tosum != 0)
			ch[j] = '0' + (res + tosum);
	}
	ch[i] = '\0';
	return (ch);
}
