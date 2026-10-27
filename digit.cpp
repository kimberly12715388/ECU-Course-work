#include<iostream>

using namespace std;

int main(){

int n = 1000;

while(n <= 9999){
  int sum = 0;
  int temp = n; 
  
  while(temp > 0){
    sum += temp % 10;
    temp /= 10;
  }
  if(n % 2 == 1 && sum == 27){
    cout << " smalles 4 digit " << n << endl; 
    break; 
  }
  n++; 
}

  return 0;
}