#include<stdio.h>
#include"function_pointers.h"

/**
 * array_iterator - print each array of element
 * @arrray : array
 * @size : element to print
 * @action : pointer to the function
 * Return : success
 **/
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

