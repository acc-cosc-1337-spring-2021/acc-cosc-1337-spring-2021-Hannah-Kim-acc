#include "dna.h"
#include <iostream>




/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/



double get_gc_content(const string& dna)
{
  double gc_count=0, total_count = 0;
  double gc_content=0;

  total_count = dna.size();

  for(int i=0;i<total_count;i++)
  {
    if (dna[i]=='G'||dna[i]=='C')
    {
      gc_count+=1;
    }
  }
  gc_content = gc_count/total_count;

  return gc_content;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string  reverse_string(string dna)
{
  int i,len = dna.size()-1;
  string reverse_dna(dna.size(),' ') ;

  for (i=len;i>=0;i--)
  {
    reverse_dna[i]=dna[len-i];
    //dna[i]=dna[dna.size()-i-1];
    
  }
  return reverse_dna;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
  string reverse_dna = " ";
  reverse_dna = reverse_string(dna);

  int i = 0;
  while(i<reverse_dna.size())
  {
    if(reverse_dna[i]=='G')
    {
      reverse_dna[i]='C';
      i+=1;
    }
    else if(reverse_dna[i]=='C')
    {
      reverse_dna[i]='G';
      i+=1;
    }
    else if(reverse_dna[i]=='T')
    {
      reverse_dna[i]='A';
      i+=1;
    }
    else if(reverse_dna[i]=='A')
    {
      reverse_dna[i]='T';
      i+=1;
    }
  }

  return reverse_dna;

}
