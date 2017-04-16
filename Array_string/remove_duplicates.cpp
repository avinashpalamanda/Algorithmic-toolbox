#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

char* remove_duplicates(char* buffer){
  int intital_count=0,result_count=0;
  int count[256]={0};

  while(*(buffer+intital_count)){
    if(count[*(buffer+intital_count)] == 0){
      count[*(buffer+intital_count)]=1;
      *(buffer+result_count) = *(buffer+intital_count);
      result_count++;
    }
    intital_count++;
  }
  *(buffer+result_count)='\0';
  return buffer;
}

int main(){
  char* buffer=new char[100];
  gets(buffer);
  remove_duplicates(buffer);
}
