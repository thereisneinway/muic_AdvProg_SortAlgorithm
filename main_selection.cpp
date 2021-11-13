#define N 20
#include <iostream>
using namespace std;
#include "sorting.h"
#include <time.h>

int main() {
  int a[20]={6,22,51,39,42,68,54,3,59,95,64,32,126,153,184,192,199,100,74,79};
  int b[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,20,19};
  int c[20]={33,857,1,66,258,22,999,2,49,71,508,82,160,408,374,555,99,205,371,680};
  int sorted;
  cout<<("INPUT: ")<<endl;
  display(c,N);
  cout<<("SORTING BEGIN...")<<endl;
  selection(c,N);
  cout<<("OUTPUT:")<<endl;
  display(c,N);

}