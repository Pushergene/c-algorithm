#include <iostream>
using namespace std;
void fun(int A[ ]) {
  cout << sizeof(A)/sizeof(int) << "\n";
}
int main() {
  int A[ ] = {2,4,6,8,10};
  int n = 5;
  for(int i : A)
    cout << i << " " << "\n";
}
 
