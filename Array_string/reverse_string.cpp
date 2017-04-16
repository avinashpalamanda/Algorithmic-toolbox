#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char* reverse_string(char* buffer){
  int len=0;
  while(1){
    if(buffer[len]=='\0')
      break;
    len++;
  }
  //cout<<len;
  int start=0;
  len=len-1;
  while(start<len){
    char temp=buffer[start];
    buffer[start++]=buffer[len];
    buffer[len--]=temp;
  }
  return buffer;
}

int main(){
  char* buffer=new char[100];
  gets(buffer);
  reverse_string(buffer);
}
