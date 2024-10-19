#include "sll.h"

// Function to find a node with a specific data value in a singly linked list
int find_node(Slist *head, data_t data)
{
    int count = 1; // Initialize a count variable to keep track of the node's position

    // Check if the linked list is empty (head is NULL)
    if (head == NULL)
        return FAILURE; // Return FAILURE if the list is empty

    // Iterate through the linked list
    while (head)
    {
        // Check if the current node's data matches the target data
        if (head->data == data)
        {
            return count; // Return the position of the found node
        }
        else
        {
            head = head->link; // Move to the next node in the list
            count++; // Increment the count to track the position
        }
    }

    return FAILURE; // Return FAILURE if the target data is not found in the list
}

