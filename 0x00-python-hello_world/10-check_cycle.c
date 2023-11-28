#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 * Description:
 * 	the hare and tort starts from the same node, the hare moves 3 nodes
 * 	and then checks if the node is same with the tort's
 * 	if true, the program returns 1, else, the tortoise moves one step
 * 	and then checks again if its same with the hare
 * 	if the hare's next address is NULL, it means the node is not in cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *tort, *hare;
	int i, result, inf = 0;

	tort = hare = list;
	if (list == NULL)
		return (0);
	if (tort->next != NULL)
	{
		while (inf == 0)
		{
			i = 0;
			while (i != 3)
			{
				if (hare->next == NULL)
					return (0);
				hare = hare->next;
				i++;
			}
			result = compare_node(hare->next, tort);
			if (result == 1)
				return (1);
			else
			{
				tort = tort->next;
				result = compare_node(hare->next, tort);
				if (result == 1)
					return (1);
			}
		}
	}
	return (0);
}

/**
 * compare_node - checks if the tort and hare points to the same node
 * @hare: hare node
 * @tort: tort node
 * Return: 1 if same, 0 if not same.
 */

int compare_node(listint_t *hare, listint_t *tort)
{
	if (hare == tort)
		return (1);
	return (0);
}
