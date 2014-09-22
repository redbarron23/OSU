#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
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

    return 0;
}

