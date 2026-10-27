#include<iostream>

using namespace std;

int main(){

  double multi = 1;
  int n;

cout <<"Enter an integer: "; 
cin >> n;

int i = 1;

while(i <= n){

  multi *= i; 
  i = i + 1; 
}

cout << multi; 

  return 0;
}