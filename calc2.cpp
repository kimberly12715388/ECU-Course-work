#include<iostream>

using namespace std;

int main(){
  double n1, n2;
  char operation; 
  cout << "Choose an aoperation:" << endl; 

  cout << " A - Addition \n S - subtraction \n M - Multiplication \n D - Divison \n " << endl; 

  cin >> operation; 

  cout << "Enter two numbers: ";
  cin >> n1;
  cin >> n2; 

switch(operation) 
{
  case 'A':
  case 'a':
    cout << "Result = " << n1 + n2;
    break;
  case 'S':
  case 's':
    cout <<"Result = " << n1 - n2; 
    break;
  case 'M':
  case 'm':
    cout <<"Result = " << n1 * n2;
    break;
  case 'D':
  case 'd':
    cout << "Result = " << n1 / n2;
    break;
} 


  return 0;
}