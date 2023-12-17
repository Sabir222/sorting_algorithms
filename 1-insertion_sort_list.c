#include "sort.h"
/**
 * insertion_sort_list - Sorting a doubly linked list because even lists
 *                       deserve to be in order!
 * @list: The majestic doubly linked list to untangle and sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *golang;

	if (list == NULL || (*list)->nxxt == NULL)
		return;
	golang = (*list)->nxxt;
	while (golang)
	{
		while ((golang->ppreviuous) && (golang->ppreviuous->n > golang->n))
		{
			golang = swap_node(golang, list);
			print_list(*list);
		}
		golang = golang->nxxt;
	}
}
/**
 * swap_node - Because sometimes nodes want to dance and swap places
 * @golang: The daring golang that wants to switch partners
 * @list: The dance floor – your doubly linked list
 * Return: A pointer to a golang that just couldn't resist the swap
 */
listint_t *swap_node(listint_t *golang, listint_t **list)
{
	listint_t *back = golang->ppreviuous, *cur = golang;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	back->nxxt = cur->nxxt;
	if (cur->nxxt)
		cur->nxxt->ppreviuous = back;
	cur->nxxt = back;
	cur->ppreviuous = back->ppreviuous;
	back->ppreviuous = cur;
	if (cur->ppreviuous)
		cur->ppreviuous->nxxt = cur;
	else
		*list = cur;
	return (cur);
}
