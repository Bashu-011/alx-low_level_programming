#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* op_add - adds the integers
* @a: one integer
* @b: the second integer to work on
* Return: The sum sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - subtracts the integers
* @a: the first integer
* @b: the second integer
* Return: The difference between a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - multiplys the integers given
* @a: the first integer
* @b: the second integer
* Return: The mulptiplication btn a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - divides the integers given
* @a: the first integer
* @b: the second integer
* Return: The division btn a and b
*/
int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - gets the modolous btn the integers
* @a: the first integer
* @b: the second integer
* Return: The remainder btn a and b
*/
int op_mod(int a, int b)
{
return (a % b);
}
