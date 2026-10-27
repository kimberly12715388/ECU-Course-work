#include<iostream>

using namespace std;

int main() {


  double s, v, a, t; 
  double S; 

  cout <<"Enter value for s: ";
  cin >> s;  
  
  cout <<"Enter value for v: ";
  cin >> v;

  cout <<"Enter value for a: ";
  cin >> a;
  
  cout <<"Enter value for t: ";
  cin >> t;

  S = s + (v * t) + (0.5 * a * t * t);

  cout << "The postion of s is: " << S << endl; 


  return 0; 
}