#include "lists.h"

/**
 * free_list - frees list
 * @head: head of linked list
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
