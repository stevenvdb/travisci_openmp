#include <iostream>
#include <string> 

using namespace std; 

int main () 
{
  int i, j, n;
  for (j=0;j<10;j++) {
    n = 0;
    #pragma omp parallel for
    for (i=1;i<11;i++) {
      n += i;
    }
    cout << "Sum of first 10 natural numbers is " << n << '\n' ;
  }
  return 0;
}
