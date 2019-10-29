#include <stdio.h>
#include <stdlib.h>

char *_tostring(int n)
{
	int factor = 1, i, j, res = n;
	char *ch, sign;

	if (n < 0)
		res *= -1;
	res /= 10;
	for(i = 1; res > 0; i++)
	{
		factor *= 10;
		res /= 10;
	}
	if (n < 0)
	{
		sign = '-';
		i++;
		j = 1;
	}
	else
	{
		j = 0;
	}
	ch = malloc((i + 1) * sizeof(char));
	if (ch == NULL)
		return (NULL);
	if (n < 0)
	{
		ch[0] = sign;
		n *= -1;
	}
	for( j = j; j <= i; j++)
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

	return(ch);
}
