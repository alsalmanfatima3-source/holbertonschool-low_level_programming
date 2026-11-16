#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	long long count;
	size_t i;

	if (min > max)
		return (NULL);

	count = (long long)max - min + 1;

	if ((unsigned long long)count > ((size_t)-1) / sizeof(int))
		return (NULL);

	array = malloc((size_t)count * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (size_t)count; i++)
		array[i] = (int)((long long)min + i);

	return (array);
}
