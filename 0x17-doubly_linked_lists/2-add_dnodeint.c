#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of a linked list
 * @head: takes in the head of the linked list
 * @n: the number of nodes
 * Return: Address of new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);

	}

	new_node->prev = NULL;
	new_node->next = *head;
	(*head)->prev = new_node;

	*head = new_node;
	return (*head);
}
