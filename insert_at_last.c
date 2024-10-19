#include "sll.h"

int insert_at_last(Slist **head, data_t data)   //Call function for insert at last
{
    Slist *new=malloc(sizeof(Slist));           //Allocating memory Dynamically
    if(new==NULL)                               //check if 
    return FAILURE;
    
    //Creating a NODE
    new->data=data;
    new->link=NULL;
    
    if(*head==NULL)                             //check if head is pointed to node or not
    {
       *head=new;                               //head updated with 'new' Node
       return SUCCESS;
    }
    Slist *temp=*head;                          //creating a temp pointer
    while(temp->link!=NULL)                     //checking temp is equal to NULL or not
    {
        temp=temp->link;
    }
    temp->link=new;                             //data to be added
    return SUCCESS;
}