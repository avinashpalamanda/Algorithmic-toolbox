#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void duplicates_in_string(char* buffer){
  int len=strlen(buffer);
  int counter[128]={0};
  for(int i=0;i<len;i++){
    if(counter[buffer[i]] != 0){
      cout<<"Duplicate Characters\n";
      return;
    }
    counter[buffer[i]]=1;
  }
  cout<<"No Duplicate Characters\n";
}

int main(){
  char* buffer=new char[100];
  gets(buffer);
  duplicates_in_string(buffer);
}
