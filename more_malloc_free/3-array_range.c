#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	int value;
	size_t count, i;

	if (min > max)
		return (NULL);

	count = (size_t)((unsigned int)max - (unsigned int)min);

	if (count == (size_t)-1)
		return (NULL);

	count++;

	if (count > (size_t)-1 / sizeof(int))
		return (NULL);

	array = malloc(count * sizeof(int));
	if (array == NULL)
		return (NULL);

	value = min;

	for (i = 0; i < count; i++)
	{
		array[i] = value;
		if (value < max)
			value++;
	}

	return (array);
}
