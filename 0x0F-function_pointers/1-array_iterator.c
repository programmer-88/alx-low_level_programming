#include "function_pointers.h"

/**
 * array_iterator - excecutes a function given as a parameter on each element
 * @array: array to use
 * @size: size of array
 * @action: function to execute
 * Return: is void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if(array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
