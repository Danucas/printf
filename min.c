#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
int main(void)
{
   int len;
   int len2;
len = _printf("Percent:[%%%]\n");
len2 = printf("Percent:[%%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

len = _printf("Percent:[%xyy]\n");
len2 = printf("Percent:[%xyy]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

len = _printf("Percent:[%ayy]\n");
len2 = printf("Percent:[%ayy]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

   return (0);

}
