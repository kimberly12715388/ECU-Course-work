#include<iostream>

using namespace std;

int main (){


  int change; 
  cout << " enter the amount of change: ";
  cin >> change; 
  
  int quarters = change / 25;
  change = change % 25;

  int dimes = change / 10;
  change = change % 10;

  int nickel = change / 5;
  change = change % 5; 

  int pennies = change / 1;

  cout << "Quarters "<< quarters << endl; 
  cout << "dimes " << dimes << endl;
  cout << "nickel " << nickel << endl; 
  cout << "pennies " << pennies << endl;


  return 0; 
}