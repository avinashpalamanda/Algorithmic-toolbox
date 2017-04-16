#include<iostream>
#include<string>
#include<vector>
using namespace std;
string reverseWords(string s) {
        vector<int> space;
        int x=0;
        space.push_back(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')
                space.push_back(i);
        }
        space.push_back(s.length());
        for(int i=1;i<space.size();i=i+1){
          int low=space[i-1]+1;
          int high = space[i]-1;
          cout<<low<<" "<<high<<endl;
          while(low<high){
            char temp=s[low];
            s[low++]=s[high];
            s[high--]=temp;
          }
        }
        return s;

}
int main(){
  cout<<reverseWords("hiaviji");
}
