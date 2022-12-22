#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using an insertion sort algorithm
 * @list: doubly linked list of integers to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *first, *get, *newnode, *temp;

	if (!list || !(*list) || !((*list)->next))
		return;

	get = (*list);
	first = (*list)->next;
	while (first)
	{
		newnode = first->next;
		while (get && first->n < get->n)
		{
			if (get->prev)
				get->prev->next = first;
			else
				*list = first;
			if (first->next)
				first->next->prev = get;
			temp = first->next;
			first->next = get;
			first->prev = get->prev;
			get->next = temp;
			get->prev = first;
			print_list(*list);
			get = first->prev;
		}
		first = newnode;
		if (first)
			get = first->prev;
	}
}
