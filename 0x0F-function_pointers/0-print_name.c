#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - a function that prints a name
* @f: variable that holds string name
* @name: holds the name
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f)(name);
}
