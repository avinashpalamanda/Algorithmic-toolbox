#include <iostream>
#include <vector>

using std::vector;
using namespace std;
int find_max(vector<int> weights,vector<int> values){
  int index=0;
  double max=0;
  vector <double>quality(values.size());
  for(int i=0;i<values.size();i++){
    if(weights[i]>0){
      quality[i]=double(values[i])/double(weights[i]);
      if(max < quality[i]){
        max=quality[i];
        index=i;
      }
    }
  }
  return index;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  int i=0;
  while(capacity!=0 && i<values.size()){
    int max_index=find_max(weights,values);
    int a=capacity<weights[max_index]?capacity:weights[max_index];
    value=value+(a*double(values[max_index])/double(weights[max_index]));
    capacity=capacity-a;
    weights[max_index]=weights[max_index]-a;
    i++;
  }
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
