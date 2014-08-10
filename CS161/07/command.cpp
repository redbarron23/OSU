/*
 * author: James Hourihane
 * class:  CS161
 * Desc:   Create a program with command line arguments
 * OSU ID is: 932509127
*/

/*
(5) Create one or more of the above programs to be command line arguments friendly
(take in values from the command line instead of asking for them as user input)
(Note: You really do want to know why we would want to use command line arguments, so do a brief search
and then discuss it on the discussion boards!)
*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
         // number of arguments
int main(int argc, char* argv[])
                   // array of chars   argv[0] name of the command
{
    for (int i=0; i< argc; i++)
        for (int j=0, n=strlen(argv[i]); j < n; j++)
            //printf("argv[%d][%d] is: %c\n", i, j, argv[i][j]);
            cout << argv[i][j] << endl;

    return 0;
}
