#include <iostream>
using namespace std;
void fun (int A[ ]) {
    cout << sizeof(A) / sizeof(int) << endl;
}

int main(){
    int A[ ] = {2,4,6,8,10};
    int n = 5;
    fun(A);
    cout << sizeof(A) / sizeof(int) << endl;
    for(int x: A)
    cout << x << " ";
}


    
