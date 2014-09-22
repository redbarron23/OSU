#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int attempts = 1;
  string str, ans;
  do {

     if (attempts >= 5)
     {
         cout << "Too many attempts" << endl; 
         break;
     }

    cout << "Enter text: ";
    getline (cin,str);
    cout << "You entered: " << str << '\n';
    attempts++;
    cout << attempts << endl;
  } while (str != "goodbye");

  cout << endl;
  cout << "Would you like to play again?... Perhaps Another Player?:";
  cout << "Enter [yY] or [nN]";
  cin >> ans;
  cout << ans;

  //bool = ans;
  //bool = ansY;

  //if (ans = 'y' || ans = 'Y')
  //{
  //   cout << "Good! Lets Play!" << endl;
  //}
}

