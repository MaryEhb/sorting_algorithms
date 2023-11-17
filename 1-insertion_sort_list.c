#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: doubly linked list of integers values
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *p_prev, *p_next, *p;

	if (!list || !(*list))
		return;

	p = *list;
	p_next = p->next;

	while (p)
	{
		while (p->prev && p->n < p->prev->n)
		{
			p_prev = p->prev;
			p_prev->next = p->next;

			if (p->next)
				p->next->prev = p_prev;

			if (p_prev->prev)
				p_prev->prev->next = p;
			else
				*list = p;

			p->prev = p_prev->prev;

			p_prev->prev = p;
			p->next = p_prev;

			print_list(*list);
		}

		p = p_next;
		if (p_next)
			p_next = p_next->next;
	}
}
