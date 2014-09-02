/*
 * Author: James Hourihane
 * class:  CS161
 * program JH_Final.cpp
 * desc: Final Project for CS161 a sampling of everything using switch statement or cmd line args
 */

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

#define PI 3.14

// A struct to represent each question with its choices and answer
// for a quiz
struct question
{
  string theQuestion;
  string choices[4];
  int answer;
};


// A struct to represent a person with attributes first name, last name and
// age
struct person
{
  string first_name;
  string last_name;
  int age;
};

// A class representing a point with X and Y coordinates
class point
{
public:
  point(int _x, int _y): x(_x), y(_y){}
  int get_x(){return x;}
  int get_y(){return y;}
  void set_x(int _x){x = _x;}
  void set_y(int _y){y = _y;}
  void print()
  {
    cout << "(" << x << ", " << y << ")";
  }
private:
  int x;
  int y;
};


// creates a set of questions for Q/A quiz
question*  make_questions()
{
  question* allQuestions = new question[2]; // change the array size for more questions

  allQuestions[0].theQuestion = "What is overflow?";
  allQuestions[0].choices[0] = "Overflow is when you add numbers together and you cannot represent it in the number of digits you have to store the number in";
  allQuestions[0].choices[1] = "Overflow is what happens when you have a fraction to store and you have no place in memory to store it";
  allQuestions[0].choices[2] = "Overflow is when one section of memory runs out and you need to move to the next one to properly store the number";
  allQuestions[0].choices[3] = "Overflow is when you have too much work to do in one program so you make another one and split the work among them";
  allQuestions[0].answer = 0;

  allQuestions[1].theQuestion = "What is the largest value I can represent in a binary number with 4 bits?";
  allQuestions[1].choices[0] = "15";
  allQuestions[1].choices[1] = "16";
  allQuestions[1].choices[2] = "8";
  allQuestions[1].choices[3] = "4";
  allQuestions[1].answer = 0;

  return allQuestions;
}


// A simple Q/A quiz session program
void quiz()
{
  // get the set of all questions
  question* allQuestions = make_questions();
  int numOfQuestions = 2;
  int score = 0;
  cout << endl << "********* Q/A Quiz Test *************" << endl;
  int answer;
  for(int i=0; i < numOfQuestions; i++)
  {
    cout << endl << "Q" << (i+1) << ". " << allQuestions[i].theQuestion << endl;
    cout << "1) " << allQuestions[i].choices[0] << endl;
    cout << "2) " << allQuestions[i].choices[1] << endl;
    cout << "3) " << allQuestions[i].choices[2] << endl;
    cout << "4) " << allQuestions[i].choices[3] << endl;
    cout << "enter your answer (1-4): ";
    cin >> answer;
    if(allQuestions[i].answer == (answer-1))
    {
      score++;
    }
  }

  cout << "Quiz Score =  " << ((float)score / (float)numOfQuestions)*100 << "%" << endl;
}

// check whether a tic-tac-toe game is won by a player
bool game_won(char board[3][3], char player)
{
  // check all the rows
  for(int row = 0; row < 3; row++)
  {
    if(board[row][0] == player && board[row][1] == player && board[row][2] == player)
    {
      return true;
    }
  }
  // check all the columns
  for(int col = 0; col < 3; col++)
  {
    if(board[0][col] == player && board[1][col] == player && board[2][col] == player)
    {
      return true;
    }
  }
  // check the diagonals
  if(board[0][0] == player && board[1][1] == player && board[2][2] == player)
  {
    return true;
  }
  if(board[2][0] == player && board[1][1] == player && board[0][2] == player)
  {
    return true;
  }
  return false;
}

void print_board(char board[3][3])
{
  int cellNo=1;
  cout << "The Board:" << endl;
  for(int i=0; i < 3; i++)
  {
    for(int j=0; j < 3; j++)
    {
      if(board[i][j] == ' ')
      {
        cout << cellNo << " ";
      }
      else
      {
        cout << board[i][j] << " ";
      }
      cellNo++;
    }
    cout << endl;
  }
}

void tictactoe()
{
  cout << endl << "***** TicTacToe Game *******" << endl;
  char board [3][3];
  char player1 = 'X';
  char player2 = 'O';
  char currentPlayer = player2;
  int move;
  // initialize the board to be empty
  for(int i=0; i < 3; i++)
  {
    for(int j=0; j < 3; j++)
    {
      board[i][j] = ' ';
    }
  }
// game loop where each player make moves in turn
  do{
    print_board(board);
    if(currentPlayer == player1)
    {
      currentPlayer = player2;
    }
    else
    {
      currentPlayer = player1;
    }
    cout << "Player " << currentPlayer << "'s turn. Enter cell position: ";
    cin >> move;
    int row = move / 3;
    int col = move - row*3 - 1;
    if(board[row][col] == ' ')
    {
      board[row][col] = currentPlayer;
    }
    else
    {
      cout << "Invalid move. That position is already occupied!" << endl;
    }
  }while(!game_won(board, currentPlayer));

  print_board(board);

  // game ended, check for a win
  if(game_won(board, player1))
  {
    cout << "Game WON by " << player1 << endl;
  }
  else if(game_won(board, player2))
  {
    cout << "Game WON by " << player2 << endl;
  }
  else
  {
    cout << "Game is a DRAW" << player1 << endl;
  }
}

// This function computes factorial of N using recursion
int fact_recursion(int N)
{
  if( N == 0)
  {
    return 1;
  }
  else
  {
    return N * fact_recursion(N - 1);
  }
}

// This function process all the command line arguments of this program
//void process_commandline_args(int argc, char* argv[])
// moved this main
void process_commandline_args()
{

  cout << "if you run argv[0] with args you will print out args";
}

// User defined function for computing the maximum of
// three numbers
float max(float a, float b, float c)
{
  float theMax = a;
  if(a < b)
  {
    theMax = b;
  }
  if(theMax < c)
  {
    theMax = c;
  }
  return theMax;
}

// ----- Function Overloading -------------

// Compute the area of a circle with given radius
float area(int radius)
{
  return (PI * radius * radius);
}

// Compute the area of a rectangle with given width and height
float area(int width, int height)
{
  return (width * height);
}

// Function that takes a integer argument passed as a value
void FuncArgByValue(int x)
{

  cout << "FuncArgByValue: argument is incremented by 1" << endl;
  x++;
  cout << "FuncArgByValue: argument value now is " << x << endl;
}

// Function that takes a integer argument passed as a reference
void FuncArgByRef(int& x)
{

  cout << "FuncArgByRef: argument is incremented by 1" << endl;
  x++;
  cout << "FuncArgByRef: argument value now is " << x << endl;
}



void simpleInput()
{
    float age;
    string name;
    cout << "Enter your name: ";
    // http://stackoverflow.com/questions/12186568/getline-skipping-first-even-after-clear 
    cin.ignore();
    getline(cin, name);
    cin.clear();
    //fflush(stdin);
    cout << endl;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Hello " << name << "! You are " << age << " years old" << endl;
}

void printCasting()
{
    float num = 10.11;
    int numIntVal = (int)num;  // type cast num to an int value (otherwise there will be compile error)
    cout << "float num = " << num << endl;
    cout << "numIntVal = (int)num = " << numIntVal << endl;
    cout << "(float)numIntVal = " << (float)numIntVal << endl; // type casting int to float
}

void printIfStatement()
{
  int x = 3;
  cout << "x = " << x << endl;
  if(x < 4)
  {
    cout << "x is less than 4" << endl;
  }
  else
  {
    cout << "x is greater than or equal to 4" << endl;
  }
}

void printlogicalOperators()
{
  float posX = 10.5;
  float posY = -1;

  cout << "posX = " << posX << endl;
  cout << "posY = " << posY << endl;
  cout << "(posX > 0  &&  posY > 0)  = " << ((posX > 0) && (posY > 0)) << endl;
  cout << "(posX < 0  || posY < 0)  = " << ((posX < 0) || (posY < 0)) << endl;
  cout << "(posX == posY)  = " << (posX == posY) << endl;
  cout << "(posX != posY) = " << (posX != posY) << endl;
}

void printBitWise()
{
  int x = 10;
  int y = 25;
  x = x ^ y;
  cout << "After doing x = x ^ y we have " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  y = x ^ y;
  cout << "After doing y = x ^ y we have " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  x = x ^ y;
  cout << "After doing x = x ^ y we have " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}

void printDoWhile()
{
  cout << "for-loop: displaying square of first 10 positive integers " << endl;
  for(int i=1; i <= 10; i++)
  {
    cout << "square(" << i << ") = " << i*i << endl;
  }
  cout << "while-loop: displaying sum of first N positive integers " << endl;
  int sum = 0;
  for(int i=1; i <= 10; i++)
  {
    sum += i;
    cout << "Sum of first " << i << " numbers = " << sum << endl;
  }

}

void printRandomNumber()
{
 int MIN,MAX;
  cout << "Generating 10 random numbers in the range [0-100]..." << endl;
  for(int i=0; i < 10; i++)
  {
    int randVal = rand() % 100;
    cout << randVal << endl;
  }
}

void syntaxLogicRuntime()
{
    /*
     float x = 1;
     if (x)     // SYNTAX ERROR as x is not of type bool even though its value is 1
     {
     cout << "print something" << endl;
     }
     cout << Z << endl;  // SYNTAX ERROR as variable Z is not declared
     */

     cout << "Please see comments in syntaxLogicRuntime function\n";
}

void debuggingTrick()
{
    cout << "Demonstrating debugging trick (divide by zero)" << endl;
    float m, n;
    cout << "Enter a number (X): ";
    cin >> m;
    cout << "Enter a number (Y): ";
    cin >> n;
    if(n == 0)
    {
      cout << "X/Y error: divide by zero exception (Y cannot be zero)" << endl;
    }
    else
    {
      cout << "X/Y = " << m/n << endl;
    }
    cout << "Demonstrating debugging trick (menu choice input verification)" << endl;
    cout << "MENU:" << endl;
    cout << "1. Add item" << endl;
    cout << "2. Search item" << endl;
    cout << "3. Quit" << endl;
    bool inputOk = false;
    int choice;
    while (!inputOk)
    {
      cout << "Enter your choice: ";
      cin >> choice;
      if(choice < 1 || choice > 3)
      {
        cout << "Invalid choice! Try again." << endl;
      }
      else
      {
        inputOk = true;
      }
    }
}

void userDefinedFunction()
{
   float a = 5, b = 5.1, c = -5.1;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "max(a, b, c) = " << max(a, b, c) << endl;
}

void functionalDecomposition()
{
  cout <<"please functionalDecomposition.cpp\n";
}

void variableScoping()
{
    int M = 1;
    cout << "Value of variable M outside if-statement = " << M << endl;
    if ( M > 0)
    {
      int M = 2;
      cout << "Value of variable M inside if-statement = " << M << endl;
      M = M + 3;
      cout << "Value of M after adding 3 inside if-statement = " << M << endl;
    }
    cout << "Value of variable M outside if-statement = " << M << endl;
}

void printCstyleString()
{
  char cStr[50];
    strcpy(cStr,"Hello");
    string cppStr = "World";
    cout << "Value of c-style string cStr = " << cStr << endl;
    cout << "Value of C++ string cppStr = " << cppStr << endl;
    cout << "Value of cppStr + cStr = " << (cppStr + cStr) << endl;
    cout << "Setting cStr[2] to NULL ..." << endl;
    cStr[2] = '\0';
    cout << "Value of cppStr + cStr = " << (cppStr + cStr) << endl;
}

void printRecursion()
{
  int N = 4;
  cout << "fact_recursion(" << N << ") = " << fact_recursion(N) << endl;
}

void printmultiDimensionalArray()
{
 int arr[4][3];
  cout << "creating 2d array of size 4x3 with random integers in the range [0-10)" << endl;
  for(int i=0; i < 4; i++)
  {
    for(int j=0; j < 3; j++)
    {
      arr[i][j] = rand() % 10;
    }
  }

 cout << "displaying the multi dimensional array.." << endl;
  for(int i=0; i < 4; i++)
  {
    for(int j=0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

}

void printDynamicArray()
{
 float*  darr;
  int size;
  cout << "How many elements will be there in the 1D dynamic array? ";
  cin >> size;
  cout << "creating 1D dynamic array of floats of size " << size << endl;
  darr = new float[size];
  cout << "assigning values to array elements randomly in range (0-100] ... " << endl;
  for(int i=0; i < size; i++)
  {
    darr[i] = rand() % 100;
  }
  cout << "displaying the array ..." << endl;
  for(int i=0; i < size; i++)
  {
    cout << darr[i] << endl;
  }
}

void populateAndPrintStruct()
{
  person aPerson;
  aPerson.first_name = "Coco";
  aPerson.last_name = "Loco";
  aPerson.age = 2;
  cout << "created a person struct aPerson..." << endl;
  cout << "aPerson.first_name = " << aPerson.first_name << endl;
  cout << "aPerson.last_name = " << aPerson.last_name << endl;
  cout << "aPerson.age = " << aPerson.age << endl << endl;
}

void printPointerToStructure()
{
  person aPerson;
  aPerson.first_name = "Chester";
  aPerson.last_name = "Cat";
  aPerson.age = 3;
  person* aPerson_ptr = &aPerson;
  cout << "created a struct pointer to aPerson..." << endl;
  cout << "changing age to 60..." << endl;
  aPerson_ptr->age = 60;
  cout << "displaying aPerson attributes though aPerson_ptr..." << endl;
  cout << "first_name = " << aPerson_ptr->first_name << endl;
  cout << "last_name = " << aPerson_ptr->last_name << endl;
  cout << "age = " << aPerson_ptr->age << endl << endl;
}

void printObjects()
{
  point aPoint(20,30);
  cout << "created a point class object aPoint at coordinates (20,30)..." << endl;
  cout << "displaying data members of aPoint..." << endl;
  cout << "aPoint.get_x() = " << aPoint.get_x() << endl;
  cout << "aPoint.get_y() = " << aPoint.get_y() << endl;
  cout << "aPoint.print() = ";
  aPoint.print();
  cout << endl;
}



 

void displayOptions()
{
  //---------------------------------------------------
    //    Requirement #01: Demonstrate simple output
  //---------------------------------------------------
  cout<<"1  Demonstrate simple output\n";
  //----------------------------------------------------
    //    Requirement #02: Demonstrate simple input
  //----------------------------------------------------
  cout<<"2. Demonstrate simple input\n";
   //--------------------------------------------------------
    //    Requirement #03: Demonstrate explicit type casting
  //--------------------------------------------------------
  cout<<"3. Demonstrate explicit type casting\n";
  //--------------------------------------------------------
    //    Requirement #04: Demonstrate conditional statements
  //--------------------------------------------------------
  cout<<"4. Demonstrate conditional statements\n";
 //--------------------------------------------------------
    //    Requirement #05: Demonstrate logical operators
  //--------------------------------------------------------
  cout<<"5. Demonstrate logical operators\n";
 //--------------------------------------------------------
    //    Requirement #06: Demonstrate bitwise operators
  //--------------------------------------------------------
  cout<<"6. Demonstrate bitwise operators\n";
 //------------------------------------------------------------
    //    Requirement #07: Demonstrate for, while, do-while loop
  //------------------------------------------------------------
  cout<<"7. Demonstrate for, while, do-while loop\n";
  //------------------------------------------------------
    //    Requirement #08: Demonstrate random number
  //------------------------------------------------------
  cout<<"8. Demonstrate random number\n";
 //-------------------------------------------------------------------------
    //    Requirement #09: Demonstrate error categories (syntax/logic/runtime)
  //-------------------------------------------------------------------------
  cout<<"9. Demonstrate error categories (syntax/logic/runtime)\n";
 //------------------------------------------------------
    //    Requirement #10: Demonstrate debugging trick
  //------------------------------------------------------
  cout<<"10. Demonstrate debugging trick\n";
 //------------------------------------------------------
    //    Requirement #11: Demonstrate user defined function
  //------------------------------------------------------
  cout<<"11. Demonstrate user defined function\n";
  //----------------------------------------------------------
    //    Requirement #12: Demonstrate functional decomposition
  //----------------------------------------------------------
  cout<<"12.  Demonstrate functional decomposition\n";
 //------------------------------------------------------
    //    Requirement #13: Demonstrate scope of variables
  //------------------------------------------------------
  cout<<"13.  Demonstrate scope of variables\n";
  //-------------------------------------------------------------------
    //    Requirement #14: Demonstrate pass by value, pass by reference
  //-------------------------------------------------------------------
  cout<<"14. Demonstrate pass by value, pass by reference\n";
 //------------------------------------------------------
    //    Requirement #15: Demonstrate function overloading
 //------------------------------------------------------
  cout<<"15. Demonstrate function overloading\n";
 //----------------------------------------------------------------
    //    Requirement #16: Demonstrate std::string and C-style string
  //----------------------------------------------------------------
  cout<<"16. Demonstrate std::string and C-style string\n";
  
 //------------------------------------------------------
    //    Requirement #17: Demonstrate recursion
  //------------------------------------------------------
  cout<<"17. Demonstrate recursion\n";
  //---------------------------------------------------------
    //    Requirement #18: Demonstrate multi dimensional array
  //---------------------------------------------------------
  cout<<"18. Demonstrate multi dimensional array\n";
 //-----------------------------------------------------------
    //    Requirement #19: Demonstrate dynamically declared array
 //-----------------------------------------------------------
  cout<<"19. Demonstrate dynamically declared array\n";
  //--------------------------------------------------------
    //    Requirement #20: Demonstrate command line arguments
  //--------------------------------------------------------
  cout<<"20.  Demonstrate command line arguments\n";
   //-------------------------------------------------------------------------
    //    Requirement #21: Demonstrate definition and use of struct
  //-------------------------------------------------------------------------
  cout<<"21. Demonstrate definition and use of struct\n";
   //-------------------------------------------------------------------------
    //    Requirement #22: Demonstrate definition and use of classes and object
  //-------------------------------------------------------------------------
  cout<<"22.  Demonstrate definition and use of classes and object\n";
  //--------------------------------------------------------
    //    Requirement #23: Demonstrate pointer to an array
  //--------------------------------------------------------
  cout<<"23. Demonstrate pointer to an array\n";
  //--------------------------------------------------------
    //    Requirement #24: Demonstrate pointer to a struct
  //--------------------------------------------------------
  cout<<"24. Demonstrate pointer to a struct\n";
  //--------------------------------------------------------
    //    Requirement #26: Question/Answers quiz session
  //--------------------------------------------------------
  cout<<"26. Question/Answers quiz session\n";
 //--------------------------------------------------------
    //    Requirement #27: A simple TIC-TAC-TOE game
  //--------------------------------------------------------
  cout<<"27.  play TIC-TAC-TOE game\n";


  cout<<"Selection: ";
}


int main( int argc, char* argv[] )
{
    int t=2;
    float radius = 10.5;
    float width = 200, height = 300;

    // http://www.cprogramming.com/tutorial/lesson5.html
    if(argc > 1)
    {
        cout << "The name used to start the program: " << argv[ 0 ]
        << "\nArguments are:\n";
        for (int n = 1; n < argc; n++)
        {
            cout << setw( 2 ) << n << ": " << argv[ n ] << '\n';
            return 0;
        }
    }
    else
    {
        displayOptions();
        int input;
        cin >> input;

        switch (input) 
        {
        case 1:
              cout << "Hello World!" << endl;
              break;
        case 2:
              simpleInput();
              break;
        case 3:
                printCasting();
              break;
        case 4:
                printIfStatement();
                break;
        case 5:
              printlogicalOperators();
                break;
        case 6:
               printBitWise();
               break;
          case 7:
              printDoWhile();
              break;
          case 8:
                printRandomNumber();
              break;
          case 9:
              syntaxLogicRuntime();
              break;
              case 10:
              debuggingTrick();
              break;
          case 11:
                userDefinedFunction();
              break;
        case 12:
                functionalDecomposition();
              break;
          case 13:
              variableScoping();
              break;
          case 14:
              cout << "FuncArgByValue called with argument t = " << t << endl;
              FuncArgByValue(t);
              cout << "value of t after call = " << t << endl;
              cout << "FuncArgByRef called with argument t = " << t << endl;
              FuncArgByRef(t);
              cout << "value of t after call = " << t << endl;
              break;
          case 15:
              cout << "area of circle with radius " << radius << " = " << area(radius) << endl;
              cout << "area of recatngle with width " << width << " and height " << height << " = " << area(width,height) << endl;
              break;
          case 16:
                printCstyleString();
                break;
          case 17:
                printRecursion();
              break;
          case 18:
                printmultiDimensionalArray();
              break;
          case 19:
                printDynamicArray();
                break;
          case 20:
                break;
              process_commandline_args();
        case 21: 
              populateAndPrintStruct();
              break;
          case 22:
                printObjects();
                break;
    case 23:
           cout << "unable to add to function for switch";
           break;
    case 24:
           printPointerToStructure();
               break;
        case 26:
          quiz();
          break;
          case 27:
              tictactoe();
              break;
        default:
              cout<<"Error, bad input, quitting\n";
              break;

          }
    cin.get();

    }

 


//--------------------------------------------------------
    //    Requirement #23: Demonstrate pointer to an array
//--------------------------------------------------------
  
float* darr2;
   darr2 = new float[4];
   for(int i=0; i < 4; i++)
   {
       darr2[i] = i;
   }
  float* arr_ptr = darr2;
  cout << "created a pointer arr_ptr pointing to float dynamic array darr..." << endl;
  cout << "displaying darr elements through arr_ptr..." << endl;
  for(int i=0; i < 4; i++)
  {
    cout << arr_ptr[i] << endl;
  } 
  
  

 //--------------------------------------------------------
    //    Requirement #25: Demonstrate pointer to an object
  //--------------------------------------------------------
  cout << "creating a pointer object named point_ptr of class point..." << endl;
  point* point_ptr = new point(4,5);
  cout << "point_ptr->get_x() = " << point_ptr->get_x() << endl;
  cout << "point_ptr->get_y() = " << point_ptr->get_y() << endl;
  cout << "point_ptr->print() = ";
  point_ptr->print();
  cout << endl;

  return(0);
}

