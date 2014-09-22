//http://www.cplusplus.com/forum/beginner/122430/

#include <iostream>
#include <string>
using namespace std;

bool validate(string s);

int main()
{
    string fraction;
    int number = 1;
    //cout << "enter fraction string\n";
    //cin >> fraction;
    validate(fraction);
    validate(1);

    //while (validate(fraction) == false)
    //{
    //    cout << "enter new fraction\n";
    //    cin >> fraction;
    //}
    //cout << fraction;
}

bool validate(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]) == true)
        {
            return false;
        }
        if (isspace(s[i]) == true)
        {
            return false;
        }
        if (ispunct(s[i]) == true)
        {
            if (s[i] != '/')
            {
                return false;
            }
        }
    }
    return true;
}
