
#include <iostream>
using namespace std;

// Hello world program
void hello_world()
{
    cout << endl << "Hello World!" << endl; 
}

// Echo program
void echo()
{
    
}

// Number guess program
void number_guess()
{
    
}


// Display the main menu of the program
void show_menu()
{
    cout << endl << "GAME MENU:"<<endl;
    cout << "1. Run the 'Hello World' program"<< endl;
    cout << "2. Run the 'Echo' program" << endl;
    cout << "3. Run the Number guessing program" << endl;
    cout << "4. Run the Number guessing program" << endl;
    cout << endl;
}

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

