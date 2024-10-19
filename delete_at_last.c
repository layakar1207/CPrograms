#include "sll.h"

int sl_delete_last(Slist **head)
{   
    // Check if the list is empty
    if(*head==NULL)
    {
        return FAILURE;
    }
    
    // Check if there's only one node in the list
    if((*head)->link==NULL)
    {
        free(*head);
        *head=NULL;
        return SUCCESS;
    }
    else
    {
        // Initialize pointers to traverse the list
        Slist *prev=NULL;
        Slist *temp=*head;
        
        // Traverse the list to find the last node
        while(temp->link!=NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        free(temp);         // Free the last node
        prev->link=NULL;    // Update the link of the previous node to remove the last node    
        return SUCCESS;
    }
}