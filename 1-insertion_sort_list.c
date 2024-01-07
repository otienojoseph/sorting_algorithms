#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list
 * of integers in ascending order
 * @list: pointer to pointer to head of list to sort
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list == NULL)
		return;

	current = *list;

	while (current)
	{
		while (current->next != NULL && (current->n > current->next->n))
		/**head - prev - current - next - tail*//*tmp*/
		/**
		 * current - previous - next
		*/
		{
			tmp = current->next;
			/*head - prev - current - tmp ... next - tail*/
			current->next = tmp->next;
			/*head - prev - current - tmp - next - tail*/
			tmp->prev = current->prev;
			/*head - prev .. tmp - current - next - tail*/
			if (current->prev)
				current->prev->next = tmp;
				/*head - prev - tmp ... current - next - tail*/
			if (tmp->next)
				tmp->next->prev = current;
				/*head - prev - temp - curent - next - tail*/

			current->prev = tmp;
			tmp->next = current;
			if (tmp->prev)
				current = tmp->prev;
			else
				*list = tmp;
			print_list(*list);
		}
		current = current->next;
	}
}
