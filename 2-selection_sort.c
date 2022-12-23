#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * order using an insertion sort algorithm
 * @array: list of integers
 * @size: number of elements
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx, t;

	if (size <= 1)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			min_idx = j;
		}
		if (min_idx != i)
			{
				t = array[i];
				array[i] = array[min_idx];
				array[min_idx] = t;
			}
	}
}
