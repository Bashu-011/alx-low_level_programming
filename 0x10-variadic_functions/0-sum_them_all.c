#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Adds the numbers passed into it
* @n: the number of values
* @....: the values to be passed in
* Return: Sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list list;


unsigned int i, sum = 0;

va_start(list, n);

for (i = 0; i < n; i++)
sum += va_arg(list, int);

va_end(list);

return (sum);
}
