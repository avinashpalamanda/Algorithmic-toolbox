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

long long get_fibonacci_huge(long long n, long long m) {
  long long a=0;
  long long b=1;

    int index=n%get_p(m);
    cout<<index<<endl;
    long long c=index;
    //cout<<index<<endl;
    for(int i=1;i<index;i++){
      c=(a+b)%m;
      //cout<<c<<endl;
      a=b;
      b=c;
    }

    return c;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge(n, m) << '\n';
}
