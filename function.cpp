#include<iostream>

using namespace std;

  // purpose: get sum oflast two digit
  // dta needed: integers
  //data returned:sum of digits
  int sum(int digit){
    int d2; 

    if(digit < 10){
      d2  = 0;
   } else {
    d2 = (digit / 10) % 10;
   } 
    int lastd =  digit % 10; 
    return d2 + lastd; 
  }

  int main(){

    int num; 

    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "The sum of two last digit is: " << sum(num); 

    return 0;
  }
  
  

