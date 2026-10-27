#include<iostream>

using namespace std; 

int main()
{

  double hours = 0, payment = 0;
  double payRate = 16.78;

  //s1 get hour value 

  cout <<"Enter the hour value: ";
  cin >> hours;

  //s2: if hour <= 40
  if(hours <= 40)
  {
    payment = hours * payRate;
  } 
  else 
  {
    payment = 40 * payRate + (hours - 40) * payRate * 1.5; 
  }

  



  return 0;
}