#include <iostream>

int gcd_fast(long long int a,long long int b) {
  while(b!=0){
    long long int temp=a;
    a=b;
    b=temp%b;
  }
  return a;
}

long long lcm_naive(long long int a,long long int b) {
  return (a*b)/gcd_fast(a,b);
}

int main() {
  long long int a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
