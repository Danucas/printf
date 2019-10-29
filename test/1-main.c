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
len = _printf("%d\n", INT_MIN);
len2 = printf("%d\n", INT_MIN);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("%d\n", INT_MAX);
len2 = printf("%d\n", INT_MAX);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("%d\n", UINT_MAX - 1);
len2 = printf("%d\n", UINT_MAX - 1);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("Negative:[%d]\n", -762534);
len2 = printf("Negative:[%d]\n", -762534);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("%d\n", 0);
   len2 = printf("%d\n", 0);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
   len = _printf("%d\n", -1);
   len2 = printf("%d\n", -1);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

   len = _printf("%d\n", 1);
   len2 = printf("%d\n", 1);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

   return (0);

}
