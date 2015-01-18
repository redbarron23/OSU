#include <iostream>

struct node
{
    int data;
    struct node* next;
};

int main()
{
    struct node* start;
    
    start = new struct node;
    start->data = 10;
    start->next = NULL;
    
    struct node* temp;
    temp = new struct node;
    temp->data = 20;
    temp->next = NULL;
    
    start->next = temp; // connecting the nodes
    
    temp = new struct node;
    temp->data = 30;
    temp->next = NULL;
    
    struct node* traverse = start; // we begin traversal from start
    while (traverse->next!=NULL) // until you reach a node that has its next as NULL (i.e. last node)
        traverse = traverse->next; // each time in the loop, move the "traverse" one node ahead via "next"
    
    // traverse is now the pointer of the LAST node on the linked list
    traverse->next = temp;
    
    
    // printing
    traverse = start;
    while (traverse != NULL)
    {
        std::cout<<temp->data<< " ";
        traverse = traverse->next;
    }
    
    
    return 0;
}
