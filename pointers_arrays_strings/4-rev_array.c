#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Array to reverse
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
