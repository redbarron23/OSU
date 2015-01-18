int dequeue()
{
    int x = front->get();
    Node* p = front;
    front = front->getNext();
    delete p;
    return x;
}
 
void enqueue(int x)
{
    Node* newNode = new Node();
    newNode->set(x);
    newNode->setNext(NULL);
      rear->setNext(newNode);
    rear = newNode;
}
 
int front()
{
    return front->get();
}
 
int isEmpty()
{
    return ( front == NULL );
}
