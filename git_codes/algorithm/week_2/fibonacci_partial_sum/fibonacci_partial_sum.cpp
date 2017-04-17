#include <iostream>
#include <vector>
using std::vector;

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

long long get_fibonacci_partial_sum(long long from, long long to) {
    if (to <= 1)
        return to;

    long long previous = 0;
    long long current  = 1;

    long long index_1=from%get_p(10);

    for (long long i = 0; i < index_1-1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
    }

    long long index_2=to%get_p(10);
    long long sum = current;

    for (long long i = index_1; i < index_2; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
        sum = (sum+current)%10;
    }

    return sum % 10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum(from, to) << '\n';
}
