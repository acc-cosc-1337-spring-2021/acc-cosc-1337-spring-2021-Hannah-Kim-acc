//write includes statements
#include "loops.h"
#include <iostream>

//write using statements for cin and cout
using std::cin;
using std::cout;
using std::endl;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
  char choice;
  do
  {
    int num;
    do
    {
      cout<<"Enter a number between 1 to 10: "<<endl;
      cin >> num;
    }
    while (num>10||num<1);

    cout << factorial(num)<<endl<<"Enter 'Y' to continue: ";
    cin>>choice;
  }
  while (choice == 'Y');

	return 0;
}