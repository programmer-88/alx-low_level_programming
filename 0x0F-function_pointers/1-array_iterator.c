#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 *
 * @size: size of array
 * @array: array of pointers to functions
 * @action: pointer to a funtion
 * Return: is void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}

}
