// http://computingforbeginners.blogspot.com/2013/02/cc-program-implementing-queue-using_10.html
#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
    int info;
    struct node *next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int n);
void dequeue();
void display();

bool isEmpty();
void addBack();
int getFront();
void removeFront();

int main()
{
   rear=NULL;
   front=NULL;
   addBack();
    
   display();
   //dequeue();
   //display();

   return 0;
}

void addBack()
{
    int n;
    std::cout<<"\nEnter The Element: \n";
    std::cin>>n;
    node *p;
    p=new node[sizeof(node)];
    p->info=n;
    p->next=NULL;
    if(rear==NULL||front==NULL)
    front=p;
    else
    rear->next=p;
    rear=p;
}

void dequeue()
{
    node *p;
    int n;
    if(front==NULL||rear==NULL)
    {
        cout<<"\nQueue Empty!!!";
    }
    else
    {
        p=front;
        n=p->info;
        front=front->next;
        delete(p);
        cout<<"The Deleted Element = "<<n<<"\n";
        display();
    }
}

void display()
{
    node *t;
    t=front;
    if(front==NULL||rear==NULL)
    {
        cout<<"\nQueue Empty!!!";
    }
    else
    {
       cout<<"\nQueue Elements are:\n";
       while(t!=NULL)
       {
           cout<<t->info<<"\n";
           t=t->next;
       }
    }
}
