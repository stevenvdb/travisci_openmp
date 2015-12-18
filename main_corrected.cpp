#include <iostream>
#include <string> 
#include <omp.h>

using namespace std; 

int main () 
{
  int i, j, n;
  for (j=1;j<2;j++) {
    n = 0;
    #pragma omp parallel for reduction(+:n)
    for (i=1;i<11;i++) {
      n += i;
    }
  }

  if (n==55) return 0;
  else return 1;
}
