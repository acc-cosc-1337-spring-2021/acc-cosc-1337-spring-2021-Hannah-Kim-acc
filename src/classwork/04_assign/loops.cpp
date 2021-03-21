//cpp
#include "loops.h"

int factorial(int num)
{
  int fac = 1, i;
  for (i=1;i<=num;i++)
  {
    fac = fac * i;
  }
  return fac;
}