#include<iostream>

using namespace std;

int main(){

int sum = 0;
int n; 

cout << "Enter a integer: ";
cin >> n;

int i = 1;

while(i <= 100){
  
  sum += 1 / (double)i; 
  i++; 

}

cout << sum << endl; 

  return 0;
}