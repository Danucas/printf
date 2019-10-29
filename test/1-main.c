#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
int main(void)
{
   int len;
   int len2;
   len = _printf(NULL);
   len2 = printf(NULL);
_printf("%d\n", INT_MIN);
printf("%d\n", INT_MIN);
_printf("%d\n", INT_MAX);
printf("%d\n", INT_MAX);
_printf("%d\n", UINT_MAX);
printf("%d\n", UINT_MAX);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);

_printf("%d\n", 0);
   printf("%d\n", 0);
   printf("%d %d\n", len, len2);
   return (0);

}
