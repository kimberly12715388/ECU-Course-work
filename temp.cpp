#include<iostream>

using namespace std;

int main(){

double F, C; 
int choice;

cout << "1. Convert Fahrenheit to Celsius" << endl << endl;
cout << "2. Convert Celsius to Fahrenheit" << endl << endl;
cout << "Enter your choice (1 or 2): "; 
cin >> choice; 

cout << endl; 

if( choice == 1){
cout <<"Enter tempature in Fahrenheit: ";
cin >> F;
cout << endl; 
double FtoC = (F - 32) * 5.0 / 9.0;
cout << F << " F is " << FtoC << " C\n"; 

}else if (choice == 2) {
cout << "Enter tempature in Celcius: ";
cin >> C;
cout << endl; 
double CtoF = (C * 9.0 / 5.0) + 32.0; 
cout << C << " C is " << CtoF << " F\n";

}

  return 0;
}