#include "lists.h"

/**
 * free_list - function that frees
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *cur_rent = head;
	list_t *temp;

	while (cur_rent != NULL)
	{
		temp = cur_rent;
		cur_rent = cur_rent->next;
		free(temp->str);
		free(temp);
	}
}
