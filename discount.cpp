#include<iostream>

using namespace std;

int main(){

  double amount; 

  cout <<"Enter amount: ";
  cin >> amount; 

  double discount = 0; 

  if (amount >= 100){
    discount = 30;

  } else if (amount >= 75){
    discount = 20; 
    
  } else if (amount >= 50){
    discount = 10;
  }

  double finaleA = amount - discount; 
  cout << "$" << finaleA; 


  return 0; 
}