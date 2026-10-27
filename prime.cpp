#include<iostream>

using namespace std; 

int main(){

int i = 3;

while(i <= 100){
  bool isPrime = true; 
  int j = 2; 

  while(j < i){
    if (i % j == 0){
      isPrime = false; 
      break; 
    }
    j++;
  } if (isPrime == true){
      cout << " " << i ; 
  }
  i++;
}

  return 0;
}