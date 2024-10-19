#include "sll.h"

int sl_delete_first(Slist **head)  //Function call for delete first
{
    if(*head==NULL)               //Check list is Empty or not
    return FAILURE;
    
    Slist *temp=*head;          //Declaring temp pointer
    
    *head=temp->link;           //storing link of next node
    
    free(temp);                 //freeing the temp pointer
    return SUCCESS;
}