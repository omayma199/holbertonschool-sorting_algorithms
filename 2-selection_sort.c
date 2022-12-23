#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using an insertion sort algorithm
 * @list: doubly linked list of integers to be sorted
 */ 
 void selection_sort(int *array, size_t size)
 {
    size_t i, j, min_idx;

	if (size <= 1)
	{
		return;
	}
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < size - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < size; j++)
          if (array[j] < array[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
           if(min_idx != i)
            swap(&array[min_idx], &array[i]);
    }
}
