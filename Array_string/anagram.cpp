#include<iostream>
#include<string.h>
using namespace std;

void anagram(char* buffer_1,char* buffer_2){
  if(strlen(buffer_1) != strlen(buffer_2)){
    cout<<"Not an Anagram\n";
    return;
  }

  int count[256]={0};
  int i=0;

  while(i<strlen(buffer_1)){
    count[*(buffer_1+i)]++;
    count[*(buffer_2+i)]--;
    i++;
  }

  for(int j=0;j<256;j++){
    if(count[j]!=0){
      cout<<"Not an Anagram\n";
      return;
    }
  }
  cout<<"Anagram\n";
}

int main(){
  char* buffer_1=new char[100];
  char* buffer_2=new char[100];
  cin>>buffer_1>>buffer_2;
  anagram(buffer_1,buffer_2);
}
