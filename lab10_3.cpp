#include<iostream>

using namespace std;

int main(){

for(char first = 'a'; first <= 'z'; ++first){
  for(char second = 'a'; second <= 'z'; ++second){
    cout << first << second << ".com"<< endl;
  }
}

  return 0; 
}