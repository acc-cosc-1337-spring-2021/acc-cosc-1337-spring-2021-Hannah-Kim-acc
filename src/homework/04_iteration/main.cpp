//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cin;
using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/

int main() 
{
  string input;
  /*
  do
  {
    int num = 0;
    string dna;
    cout<<"Enter 1 for Get GC Content, 2 for DNA Complement: ";
    cin>>num;
    switch(num)
    {
      case 1: 
      cout<<"Enter a DNA string to get GC content: ";
      cin>>dna;
      cout<<"The GC content is: "<<get_gc_content(dna)<<"\n";
      break;
      case 2:
      cout<<"Enter a DNA string to get DNA complement: ";
      cin>>dna;
      cout<<"The DNA complement is: "<<get_dna_complement(dna)<<"\n";
      break;
    }
    cout<<"Enter 'Y' or 'y' to continue: ";
    cin>>input;
  }
  while(input=='Y'||input == 'y');
  */

  while(input != "Y"&&input != "y")
  {
    int num = 0;
    string dna;
    cout<<"Enter 1 for Get GC Content, 2 for DNA Complement: ";
    cin>>num;
    switch(num)
    {
      case 1: 
      cout<<"Enter a DNA string to get GC content: ";
      cin>>dna;
      cout<<"The GC content is: "<<get_gc_content(dna)<<"\n";
      break;
      case 2:
      cout<<"Enter a DNA string to get DNA complement: ";
      cin>>dna;
      cout<<"The DNA complement is: "<<get_dna_complement(dna)<<"\n";
      break;
    }
    cout<<"Enter 'Y' or 'y' to exit: ";
    cin>>input;
  }

	return 0;
}