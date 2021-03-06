/*
 * class: CS161
 * name: James Hourihane
 * program: gameMenu.cpp
 * desc: create menu of options to choose to play games do functions etc
*/
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void hello_world();
void echo();
void number_guess();
void show_menu();

// Read menu choice. Keep prompting for choice until user
// enters valid value. Display appropriate error messages.
// return the valid menu choice
int read_menu_choice()
{ 
    bool done = false;
    int choice;
    while (!done)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice < 1 || choice > 4)
        {
            cout << "Invalid choice! Should be either 1,2 or 3"<<endl;
        }
        else
        {
            done = true;
        }
    }
    return choice;
}


int main()
{
    int choice; // read user menu choice
    bool done = false;  // flag to terminate loop
    
    // loop of the menu
    while(!done)
    {
        // display the menu
        show_menu();
        
        // read the menu choice
        choice = read_menu_choice();
        
        // run the program as per menu choice
        switch(choice)
        {
            case 1:
                hello_world();
                break;
                
            case 2:
                echo();
                break;
                
            case 3:
                number_guess();
                break;
                
            case 4:
                done = true;
                break;
        }
    } 
    
    return(0);
}

// Hello world program
void hello_world()
{
    cout << endl << "Hello World!" << endl; 
}

// Echo program
void echo()
{
    string s;
    cout << "Enter a string: ";
    //getline(cin, s);
    cin >> s;
    cout << s;
    //cin.get();
}

// Number guess program
void number_guess()
{
    bool goOn=true;
    while(goOn)
    {
        srand(time(0));
        int number=rand()%10+1;;
        int guess;

        char answer;
        cout<<"Im thinking of a number between 1-10. Take a guess: ";
        cin>>guess;
    while(guess!=number)
    {

        if(guess>number)
        {
            cout<<"Too high,Guess again: ";
            cin>>guess;
        }

        if(guess<number)
        {
            cout<<"Too low,Guess again: ";
            cin>>guess;
        }

    }

    if(guess==number)
    {
        cout<<"Congrats!! You got it.";
    }

    cout<<"would you like to play again? Enter y or n: ";
    cin>>answer;

    if(answer!='y')
    {
        goOn=false;
       cout<<"thanks for playing!"<<endl;
    }

    }

    
}

// Display the main menu of the program
void show_menu()
{
    cout << endl << "GAME MENU:"<<endl;
    cout << "1. Run the 'Hello World' program"<< endl;
    cout << "2. Run the 'Echo' program" << endl;
    cout << "3. Run the Number guessing program" << endl;
    cout << "4. Exit the program" << endl;
    cout << endl;
}
