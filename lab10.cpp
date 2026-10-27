#include<iostream>
#include<cmath>

using namespace std;

int main(){

  double a;
  int b;

  cout << "Enter the a: ";
  cin >> a;

  cout << "Enter the b: ";
  cin >> b; 

  double result = 1.0;

  if(a == 0.0){
    if(b < 0){
      cout << "divison by zero wrong. "<< endl;
      return 1;
    } else {
      result = 0.0; 
    }
  } else if (b == 0){
    result = 1.0;
  } else {
    int absB = abs(b);
    for(int i = 0; i < absB; ++i){
      result *= a;
    }
    if(b < 0){
      result = 1.0 / result;
    }
  }

  cout << a << " Rasied to the power of " << b << " is: " << result << endl;

  return 0; 
}