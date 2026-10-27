#include<iostream>

using namespace std;

int main() {

  double hourV,payR;
  double Gross, fedTax, stateTax; 
  double localTax, netIncome; 
  
  cout << "enter the hour value:  ";
  cin >> hourV; 

  cout << "Enter pay rate ($/hour): ";
  cin >> payR; 

  Gross = hourV * payR;

  fedTax = Gross * 0.08;
  stateTax = Gross * 0.09;
  localTax = Gross * 0.05;

  netIncome = Gross - (fedTax + stateTax + localTax);

  cout << "\n Pay Stub Summary ---" << endl; 
  cout << "Your gross income is: $" << Gross << endl; 
  cout << "Federal income tax: $" << fedTax << endl;
  cout << "State income tax: $" << stateTax << endl; 
  cout << "Local income tax: $" << localTax << endl; 
  cout << "Your net income is: $" << netIncome << endl; 



  return 0;
}