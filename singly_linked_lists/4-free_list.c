#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
list_t *end;
while (head != NULL)
{
end = head->next;
free(head->str);
free(head);
head = end;
}
}
