#include<iostream>

using namespace std;

int main(){

  double a, b, c;

cin >> a;
cin >> b;
cin >> c; 

if(a + b <= c || a + c <= b || b + c <= a){
  cout << "Invalid- this does not make a triangle";
  return 0;
}

 if (a == b && b == c){
    cout << "Equilateral"; 
} else if (a == b || b == c || a == c){
    cout << "Isosceles";
} 

 if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
    cout << " Right Triangle";
} else if (a != b && b != c && a != c) {
  cout << "Other"; 
}

  return 0; 
}