#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
int main(void)
{
   int len;
   int len2;
   len = printf("%d");
   len2 = _printf("%d");
   printf("\nlen: %d len: %d\n", len, len2);
   len = _printf("%d\n", 7777777777777777);
   len2 = printf("%d\n", 7777777777777777);
   printf("\nlen: %d len: %d\n", len, len2);

len = _printf("%d\n", INT_MIN);
len2 = printf("%i\n", INT_MIN);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("%d\n", INT_MAX);
len2 = printf("%i\n", INT_MAX);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("%d\n", UINT_MAX);
len2 = printf("%i\n", UINT_MAX);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("Negative:[%d]\n", -762534);
len2 = printf("Negative:[%i]\n", -762534);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("%d\n", 0);
   len2 = printf("%i\n", 0);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
   len = _printf("%d\n", -1);
   len2 = printf("%i\n", -1);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

   len = _printf("%d\n", 1);
   len2 = printf("%i\n", 1);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("Percent:[%%%]\n");
len2 = printf("Percent:[%%%]\n");
_printf("Len:[%d]\n", 6.7);
printf("Len:[%d]\n", 6.7);

   return (0);

}
