#include<iostream>
#include <cmath>

using namespace std;

int main(){

  char choice = 'y'; 
  int n;
  double sum = 0.0; 

  
  while (choice == 'Y' || choice == 'y'){
    cout << "Enter a value: ";
    cin >> n; 

  for(int i = 0; i < n; i++ ){
    double term = pow(-1, i) / (2.0 * i + 1.0);
    sum += term; 
  }

  double pi =  4.0 * sum ;
  
  cout << "Aproximent value of pi: " << pi << endl; 

  cout << "Do you you want to run it again? (y/n): ";
  cin >> choice;

  } 

  cout << "Goodbye";

  return 0;
}