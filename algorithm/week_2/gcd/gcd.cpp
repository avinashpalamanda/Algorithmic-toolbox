#include <iostream>
using namespace std;
int gcd_fast(long long int a,long long int b) {
  while(b!=0){
    int temp=a;
    a=b;
    b=temp%b;
  }
  return a;
}

int main() {
  long long int a, b;
  std::cin >> a >> b;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
