#include <stdio.h>
void fun2(int n) {
    if(n > 0) {
        fun2(n - 1);
        printf("%d", n);
    }
}

void fun(int n) {
	if (n > 0) {
		printf("%d" , n);
		fun(n-1);
    }
  }
int main() {
  int x = 3;
  fun(x);
  fun2(x);
}
