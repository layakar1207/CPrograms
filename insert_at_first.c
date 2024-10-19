#include "sll.h"

int insert_at_first(Slist **head, data_t data)     // Call function for insert at first
{
	Slist *new=malloc(sizeof(Slist));             //Allocating memory for new pointer dynamically 
	
	
    //Creating a NODE
	new->data=data;                              //To be inserted data
	new->link=*head;                            //store head value to link
	  *head=new;                               //assign node to head 
	   return SUCCESS;
}