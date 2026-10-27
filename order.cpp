#include<iostream>

using namespace std;

int main (){

  int n1, n2, n3;
  int first, second, last;

  cout << "Enter a number: ";
  cin >> n1;

  cout << "Enter second number: ";
  cin >> n2;
  
  cout << "Enter third number: ";
  cin >> n3;

  if(n1 <= n2 && n1 <= n3){
     first = n1; 
    if(n2 <= n3){
      second = n2;
      last = n3;
    } else {
      second = n3;
      last = n2; 
    } 
  } else if(n2 <= n1 && n2 <= n3){
    first = n2;
    if (n1 <= n3){
      second = n1;
      last = n3;
    } else {
        second = n3; 
        last = n1;
    }
  } else {
      first = n3; 
      if (n1 <= n2){
        second = n1;
        last = n2;
      } else {
        second = n2;
        last = n1;
      }
  }

  cout << first << " " << second << " " << last << endl;   


  return 0;
}