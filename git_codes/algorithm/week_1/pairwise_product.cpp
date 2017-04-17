#include <iostream>
#include <vector>
#include<algorithm>

using std::vector;
using std::cin;
using std::cout;

bool myfunction (int i,int j) { return (i<j); }

long long int MaxPairwiseProduct(vector<long long int>& numbers) {

  std::sort (numbers.begin(), numbers.end());

  //cout<<numbers[numbers.size()-1]<<" "<<numbers[numbers.size()-2]<<"\n";
  return numbers[numbers.size()-1]*numbers[numbers.size()-2];
}

int main() {
    int n;
    cin >> n;
    vector<long long int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long int result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
