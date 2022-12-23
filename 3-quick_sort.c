#include "sort.h"
/**
 * swap - swap two elements in array
 * @array: list of integers
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/**
 * partition - second method
 * @array: array
 * @low: int
 * @high: int
 * @size: size_t
 * Return: int
 */
int partition(int array[], int low, int high)
{

	int pivot = array[high];

	int i = (low - 1);

	for (int j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
/**
 * quick_sort - sort method
 * @array: array
 * @low: int
 * @high: int
 */
void quick_sort(int *array, size_t size)
{
	int low, high;

	if (low < high)
	{
		int pi = partition(array, low, high);
		quick_sort(array, low, pi - 1);
		quick_sort(array, pi + 1, high);
	}
}