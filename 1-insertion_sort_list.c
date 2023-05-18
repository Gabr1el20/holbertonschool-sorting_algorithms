#include "sort.h"
/**
 * insertion_sort_list - Function that sorts a doubly linked list
 * using the insertion sort algorithm
 * @list: the doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *traveler, *aux, *previous;

	if (list == NULL)
		return;

	traveler = *list;
	while (traveler)
	{
		aux = traveler;
		while (aux->prev && aux->n < aux->prev->n)
		{
			previous = aux->prev;
			if (aux->next)
				aux->next->prev = previous;
			if (previous->prev)
				previous->prev->next = aux;
			else
				*list = aux;

			previous->next = aux->next;
			aux->prev = previous->prev;
			aux->next = previous;
			previous->prev = aux;

			print_list(*list);
		}
		traveler = traveler->next;
	}
}
