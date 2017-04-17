#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    int array[n];
    array[0]=0;
    array[1]=1;
    int i=2;
    while(i<=n){
      array[i]=(array[i-2]+array[i-1])%10;
      i++;
    }
    return array[n] % 10;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
