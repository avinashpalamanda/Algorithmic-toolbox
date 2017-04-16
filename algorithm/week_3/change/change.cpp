#include <iostream>

using namespace std;
int no_ways(int n){
    int count;
    int rem;
    if(n>0){
      count=n/10;
      rem=n%10;
    }
    if(n>0){
      count+=rem/5;
      rem=rem%5;
    }
    count=count+rem;
    return count;
}


int main(){
    int s;
    cin >> s;
    cout<<no_ways(s)<<endl;
    return 0;
}
