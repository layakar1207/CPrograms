#include "sll.h"

// This function deletes the entire singly linked list.
int sl_delete_list(Slist **head)
{
    // Check if the list is empty (head is NULL).
    if (*head == NULL)
        return FAILURE;

    Slist *temp;

    // Iterate through the list and free memory for each node.
    while ((*head)->link != NULL)
    {
        temp = *head;
        *head = (*head)->link;
        free(temp);
    }

    // Set the head to NULL, indicating that the list is empty.
    *head = NULL;
    
    return SUCCESS;
}
