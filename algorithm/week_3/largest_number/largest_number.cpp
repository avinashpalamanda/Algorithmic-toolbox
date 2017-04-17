#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using namespace std;
bool IsGreaterOrEqual(string a,string b){
  string x=a+b;
  string y=b+a;
  for(int i=0;i<x.size();i++){
    if(x[i]>y[i])
      return false;
    else if(x[i]<y[i])
      return true;
    else
      continue;
  }
}



string largest_number(vector<string> a) {
  //write your code here
  vector<string> res;
  int index=0;
  while(a.size()!=0){
    string maxdigit=" ";
    for(int i=0;i<a.size();i++){
      if(IsGreaterOrEqual(maxdigit,a[i])){
        maxdigit=a[i];
        index=i;
      }
    }
    res.push_back(maxdigit);
    a.erase(a.begin()+index);
  }

  std::stringstream ret;
  for (size_t i = 0; i < res.size(); i++) {
    ret << res[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
