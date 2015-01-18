#include <iostream>

struct node
{
	char Room;
	node *North;
	node *South;
	node *East;
	node *West;
};

void createMaze(node &head, node &last);
void showMaze(node *current, node *last);
void moveInMaze(node *current, node *last);
void createMaze(node *&head, node *&last, node *current);

int main()
{
	int hold=0;
	node *head = NULL;
	node *last = NULL;
	createMaze(head,last,head);
	moveInMaze(head,last);
	showMaze(head,last);
  std::cin>>hold;
	return 0;
}

void createMaze(node *&head, node *&last, node *current)
{
	node *temp = new node;
	temp->Room = 'A';
	temp->East = NULL;
	temp->West = NULL;
	temp->North = NULL;
	temp->South = NULL;

	head = temp;
	
	node *temp1 = new node;
	temp1->Room = 'B';
	temp1->East = NULL;
	temp1->West = NULL;
	temp1->North = NULL;
	temp1->South = NULL;

	head->East=temp1;

	node *temp2 = new node;
	temp2->Room = 'C';
	temp2->East = NULL;
	temp2->West = NULL;
	temp2->North = NULL;
	temp2->South = NULL;

	current=temp1;
	current->East=temp2;
	
	node *temp3 = new node;
	temp3->Room = 'D';
	temp3->East = NULL;
	temp3->West = NULL;
	temp3->North = NULL;
	temp3->South = NULL;

	
	current=temp2;
	current->East=temp3;
	
	
	node *temp4 = new node;
	temp4->Room = 'E';
	temp4->East = NULL;
	temp4->West = NULL;
	temp4->North = NULL;
	temp4->South = NULL;

	current=temp3;
	current->South=temp4;
	
	node *temp5 = new node;
	temp5->Room = 'F';
	temp5->East = NULL;
	temp5->West = NULL;
	temp5->North = NULL;
	temp5->South = NULL;

  current=temp4;
	current->West=temp5;

	node *temp6 = new node;
	temp6->Room = 'G';
	temp6->East = NULL;
	temp6->West = NULL;
	temp6->North = NULL;
	temp6->South = NULL;

  current=temp5;
	current->West=temp6;
	
	node *temp7 = new node;
	temp7->Room = 'H';
	temp7->East = NULL;
	temp7->West = NULL;
	temp7->North = NULL;
	temp7->South = NULL;

  current=temp6;
	current->West=temp7;

	node *temp8 = new node;
	temp8->Room = 'I';
	temp8->East = NULL;
	temp8->West = NULL;
	temp8->North = NULL;
	temp8->South = NULL;

  current=temp7;
	current->South=temp8;
		
	node *temp9 = new node;
	temp9->Room = 'J';
	temp9->East = NULL;
	temp9->West = NULL;
	temp9->North = NULL;
	temp9->South = NULL;

  current=temp8;
	current->East=temp9;

	node *temp10 = new node;
	temp10->Room = 'K';
	temp10->East = NULL;
	temp10->West = NULL;
	temp10->North = NULL;
	temp10->South = NULL;

  current=temp9;
	current->South=temp10;

	node *temp11 = new node;
	temp11->Room = 'L';
	temp11->East = NULL;
	temp11->West = NULL;
	temp11->North = NULL;
	temp11->South = NULL;

  current=temp10;
	current->East=temp11;

	node *temp12 = new node;
	temp12->Room = 'M';
	temp12->East = NULL;
	temp12->West = NULL;
	temp12->North = NULL;
	temp12->South = NULL;

  current=temp11;
	current->South=temp12;

	node *temp13 = new node;
	temp13->Room = 'N';
	temp13->East = NULL;
	temp13->West = NULL;
	temp13->North = NULL;
	temp13->South = NULL;

  current=temp12;
	current->East=temp13;

	node *temp14 = new node;
	temp14->Room = 'O';
	temp14->East = NULL;
	temp14->West = NULL;
	temp14->North = NULL;
	temp14->South = NULL;

  current=temp13;
	current->North=temp14;

	last = temp14;

}

void showMaze(node *current,node *last)
{
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"The Maze:"<<std::endl;
	while(current !=NULL)
	{
      std::cout<<current->Room;
		if (current->East!=NULL)
		{
			current=current->East;
      std::cout<<" goes East to "<<std::endl;
		}
		else if (current->West!=NULL)
		{
			current=current->West;
      std::cout<<" goes West to "<<std::endl;
		}
		else if (current->North!=NULL)
		{
			current=current->North;
      std::cout<<" goes North to "<<std::endl;
		}
		else if (current->South!=NULL)
		{
			current=current->South;
      std::cout<<" goes South to "<<std::endl;
		}
		else
		{
			if (current==last)
			{
          std::cout<<" goes Out of Maze. "<<std::endl;
				current=current->East;
			}
		}


	}
}


void moveInMaze(node *current,node *last)
{
	char choice;
	while(current !=NULL)
	{
      std::cout<<"Your are in Room " <<current->Room<<std::endl;
      std::cout<<"Please Enter in which direction you want to move :" <<std::endl;
      std::cout<<"East(e),West(w),North(n) or South(s)"<<std::endl;
      std::cin>>choice;

		if (current==last)
		{
        std::cout<<"Congratulation!!! You just clear the Maze. "<<std::endl;
			current=current->East;
		}
		else{
			switch(choice)
			{
			case 'e':
				if (current->East!=NULL)
				{
					current=current->East;
				}
				else
				{
            std::cout<<"You can not move in the chosen direction \n";
				}
				break;
			case 'w':
				if (current->West!=NULL)
				{
					current=current->West;
				}
				else
				{
            std::cout<<"You can not move in the chosen direction \n";
				}
				break;
			case 'n':
				if (current->North!=NULL)
				{
					current=current->North;
				}
				else
				{
            std::cout<<"You can not move in the chosen direction \n";
				}
				break;
			case 's':
				if (current->South!=NULL)
				{
					current=current->South;
				}
				else
				{
            std::cout<<"You can not move in the chosen direction \n";
				}
				break;
	
      default: std::cout<<"Invalid Choice \n";
			}
		}
	}
}
