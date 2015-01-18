#include <iostream>

// Create Struct w/ pointer
struct node
{
    int data;
    struct node* next;
};

// define top
struct node* top = NULL;

// prototype
void push(); // push via user input
int peek(); // get top of the stack
void pop(); // pop off last element 
bool isEmpty(); // check if there is a top
//void traverseAndPrint();

// main
int main()
{
    push();
    peek();
    pop();
    isEmpty();
   
    node->next = temp;
    // traverseAndPrint
    node = top;
    while (node != NULL)
    {
        std::cout << temp->data << " ";
        node = node->next;
    }

    return 0;
}

// functions
bool isEmpty()
{
    if (top == NULL)
        return true; // i.e. yes stack is empty
    else
        return false;
}

int peek() // returns the value on top of the structure
{
    return top->data;
}

void push()
{
    int item;
    std::cout<<"Enter the item to push: ";
    std::cin>>item;

    if (top == NULL)
    {
        // set this new item at the TOP (As this is the first node coming in)
        top = new struct node;
        top->data = item;
        top->next = NULL;
    }
    else
    {
        //first make the new node
        struct node* temp = new struct node;
        // set the data
        temp->data = item;

        // link to top
        temp->next = top;

        //update top
        top = temp;
    }
}

void pop()
{
    if (isEmpty() == false)
        //top = top.next;
        top->next = top;
    // stack1.cpp:71:18: error: member reference type 'struct node *' is a pointer; maybe you meant to use '->'?
    //         top = top.next;
}

