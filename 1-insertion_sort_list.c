#include "sort.h"
/**
 * insertion_sort_list - fu
 * @list: D
 */
void insertion_sort_list(listint_t **list)/* comment*/
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)/* comment*/
		return;
	node = (*list)->next;/* comment*/
	/* comment*/
	while (node)/* comment*/
	{
		while ((node->prev) && (node->prev->n > node->n))/* comment*/
		{
			node = swap_node(node, list);/* comment*/
			/* comment*/
			print_list(*list);
		}
		node = node->next;
	}
}
/**
 *swap_node - swap a node for his previous one
 *@node: node
 *@list: node list
 *Return: return a pointer to a node which was enter it
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	back->next = current->next;/* comment*/
	/* comment*/
	if (current->next)/* comment*/
		current->next->prev = back;/* comment*/
		/* comment*/
	current->next = back;/* comment*/
	/* comment*/
	current->prev = back->prev;/* comment*/
	back->prev = current;/* comment*/
	/* comment*/
	if (current->prev)/* comment*/
		current->prev->next = current;/* comment*/
	else
		*list = current;/* comment*/
	return (current);
}
