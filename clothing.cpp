#include<iostream>

using  namespace std;

//purpose: to get hat size
// data needed: weight and height 
// data returned: hat size

double hat(double weight, double height){
  double hatSize = (weight / height) * 2.9;
  return hatSize; 
}

// purpose: get jacket size.
// data needed: height, weight, age
// data returned: jacket size

double jacket(double height, double weight, int age){
  double jacketSize = (height * weight) / 288.0; 
  if(age > 30){
    int adjust = (age - 30) / 10;
    jacketSize += adjust * 0.125; 
  }
  return jacketSize; 
}

// purpose: get waist in
// data needed: weight, age
// data returned: waist inches

double waist(double weight, int age){
  double waistIn = weight / 5.7; 
  if(age > 28){
    int  twoAdjust = (age - 28) / 2;
    waistIn +=  twoAdjust * 0.1; 
  }
  return waistIn; 
}

int main(){

  double height, weight;
  int age; 
  char choice = 'y'; 

  while(choice == 'y' || choice == 'Y'){

  cout << "Enter your height(in inches): ";
  cin >> height;

  cout << "Enter your weight(in pounds): ";
  cin >> weight;

  cout << "Enter your age: ";
  cin >> age; 

  cout << endl; 

  cout << "Your hat size: " << hat(weight, height)<< endl;

  cout << "Your jacket size: " << jacket(height, weight, age) << endl;

  cout << "Your waist in inches: " << waist(weight, age) << endl;

  cout << "Do you want to do another calculation: (y/n): ";
  cin >> choice; 
  }

  cout << "Program done"; 

  return 0; 
}