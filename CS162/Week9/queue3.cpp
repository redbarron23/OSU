#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
    int info;
    struct node *next;
}*front,*rear;

void enqueue(int n);
void dequeue();
void display();

int main()
{
    int ch,n;
    rear=NULL;
    front=NULL;
    while(1)
    {
        cout<<"\n\n\tMENU";
        cout<<"\n#############################";
        cout<<"\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"\nEnter The Element: \n";
            cin>>n;
            enqueue(n);
            display();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            cout<<"\nWrong Choice!!! Try Again.";
        }
    }
    return 0;
}

void enqueue(int n)
{
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
