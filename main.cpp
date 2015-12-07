#include <iostream>
#include <string> 
#include <omp.h>

using namespace std; 

int main () 
{
  int i, n, nthreads;
  n = 0;
  #pragma omp parallel for
  for (i=1;i<11;i++) {
    nthreads = omp_get_num_threads();
    n += i;
  }
  cout << "Running OpenMP with " << nthreads << " threads\n"; 
  cout << "Sum of first 10 natural numbers is " << n << '\n' ;
  if (n==55) return 0;
  else return 1;
}
