#include <iostream>
#include <string> 
#include <omp.h>

using namespace std; 

int main () 
{
  int i, n, nmax;
  n = 0;
  nmax = 1000;
  #pragma omp parallel for
  for (i=1;i<=nmax;i++) {
    n += i;
  }
  cout << "Sum of first " << nmax << " natural numbers is " << n << ", should be " << nmax*(nmax+1)/2 << '\n' ;
  if (n==nmax*(nmax+1)/2) return 0;
  else return 1;
}
