#include<iostream>

using namespace std;

int main(){

int year; 

cout << " Enter digit number for a year: "; 
  cin >> year;

  if(year % 400 == 0){
    cout << year << " Is a leap year" << endl;
  } else if (year % 100 == 0){
    cout << year << " Is not a leap year" << endl; 
  } else if (year % 4 == 0){
    cout << year << " Is a leap year" << endl; 
  } else {
    cout << year << " is not a leap year" << endl;
  }

  return 0;
}