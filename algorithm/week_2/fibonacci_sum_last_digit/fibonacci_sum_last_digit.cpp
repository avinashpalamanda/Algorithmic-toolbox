#include <iostream>
using namespace std;
long long get_p(long long m){
  long long a=0;
  long long b=1;
  long long c=a+b;
  for(int i=0;i<m*m;i++){
  //  long long  prev = a;
    c=(a+b)%m;
    a=b;
    b=c;
    if(a==0 && b == 1){
      return i+1;
    }
  }
}

long long get_fibonacci_sum(long long n) {
  long long a=0;
  long long b=1;

    int index=n%get_p(10);
  //  cout<<index<<endl;
    if(index==0)
      return 0;
    long long c=index;
    long long sum=b;
    for(int i=1;i<index;i++){
      c=(a+b)%10;
      //cout<<c<<endl;
      a=b;
      b=c;
      sum=(sum+c)%10;
    }

    return sum;
}
int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << get_fibonacci_sum(n);
}
