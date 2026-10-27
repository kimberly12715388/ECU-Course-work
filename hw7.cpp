#include<iostream>

using namespace std;

int main(){

  int n; 
  int i = 1;

  int total = 0; 

  cout <<"Enter a postive integer: "; 
  cin >> n; 

  while( i <= n){
    total = total + i;
    i += 1;
  }

  cout << total << endl;



  return 0;
}