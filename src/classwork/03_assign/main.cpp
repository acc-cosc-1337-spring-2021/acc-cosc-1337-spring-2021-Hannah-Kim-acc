//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>

//Write namespace using statements for cout and cin
using std::cout;
using std::cin;
using std::endl;

int main() 
{
  int grade;
  string result_if, result_switch;

  cout<<"Enter your grade: ";
  cin >> grade;

  if (grade >= 0 && grade <=100)
  {
    result_if = get_letter_grade_using_if(grade);
    result_switch = get_letter_grade_using_switch(grade);
    cout << "Your letter grade is " << result_if << endl;
    cout << "Your letter grade is " << result_switch<<endl;
  }
  else 
  {
    cout << "number out of range."<<endl;;
  }
	return 0;
}

