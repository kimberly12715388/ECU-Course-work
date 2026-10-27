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


  if(operation == 'A' || operation == 'a'){
     cout << "Result = " << n1 + n2; 
  } else if (operation == 'S' || operation == 's'){
      cout << "Result = " << n1 - n2; 
  } else if (operation == 'M' || operation == 'm'){
      cout << "Result = " << n1 * n2;
  } else if (operation == 'D' || operation == 'd'){
      cout << "Result = " <<n1 / n2;
  }





  return 0; 
}