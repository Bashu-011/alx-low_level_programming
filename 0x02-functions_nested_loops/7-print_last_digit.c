#include "main.h"
/**
* print_last_digit - printing the last digit of a number
* @n: the number to use
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
int a = n % 10;
_putchar(a + '0');
return (a);
}
