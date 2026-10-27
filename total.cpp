#include<iostream>

using namespace std;

int main(){

  double intrest, intrestRB1k = 0.015;
  double intrestRA1k = 0.01;
  double Balance, total, minPay;

  cin >> Balance; 

  if (Balance > 1000){

    intrest = 1000 * 0.015 + (Balance - 100) * 0.01 + intrestRB1k;
  } else {
    intrest = Balance * intrestRA1k;
  }
   if ((total * 0.1) > 10){
    minPay = total * 0.1;
   } else {
    minPay = 10;
   }




  return 0; 
}