//cpp
#include "decision.h"
#include <string>

using std::string;

string letter_grade;

string get_letter_grade_using_if(int grade)
{
  
  if(grade <= 100 && grade >= 90)
  {
    letter_grade = "A";
  }
  else if (grade >= 80 && grade <= 89)
  {
    letter_grade = "B";
  }
  else if(grade >= 70 && grade <= 79)
  {
    letter_grade = "C";
  }
  else if(grade >= 60 && grade <= 69)
  {
    letter_grade = "D";
  }
  else if(grade >= 00 && grade <= 59)
  {
    letter_grade = "F";
  }
  else
  {
    letter_grade = "number out of range";
  }
  return letter_grade;
}

string get_letter_grade_using_switch(int grade)
{
  grade = grade/10;
  switch(grade)
  {
    case 9: case 10:
    letter_grade = "A";
    break;

    case 8:
    letter_grade = "B";
    break;

    case 7:
    letter_grade = "C";
    break;

    case 6:
    letter_grade = "D";
    break;

    case 5: case 4: case 3: case 2: case 1: case 0:
    letter_grade = "F";
    break;

    default:
    letter_grade = "number out of range";
    break;
  }

  return letter_grade;
}