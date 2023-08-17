#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - it iterates through an array
* @array: this is the target array
* @size: array size
* @action: function pointer
*/



void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
