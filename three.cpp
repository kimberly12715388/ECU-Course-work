#include<iostream>

using namespace std;

int main(){

int i = 100; 
 int pali = 0; 

while(i <= 999){
 if (i % 10 == i / 100 && i % 6 == 0){
  pali = i; 
  }
  i++; 
}
cout << "The biggest three digit palindrome / 6: " << pali << endl; 

  return 0;
}