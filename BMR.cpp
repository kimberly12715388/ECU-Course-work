#include<iostream>
#include<cmath>

using namespace std;

int main(){

  char gender; 
  double weight, height;
  int age; 

  cout << "Enter Gender, M for male, and F for Female:";
  cin >> gender;  

  cout << "Enter Weight (in pounds): ";
  cin >> weight;

  cout << "Enter Height (in inches): ";
  cin >> height;

  cout <<"Enter age: ";
  cin >> age; 

  if(gender == 'F' || gender == 'f'){
    double BMRf = 655 + (4.3 * weight) + (4.7 * height) -   (4.7 * age); 
    cout << "You can eat " << BMRf / 230 << " Chocolate bars!";

  } else if (gender == 'M' || gender == 'm') {
      double BMRM = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
      cout << "You can eat " << BMRM / 230 << " Chocolate bars!";
  }

  return 0;
}