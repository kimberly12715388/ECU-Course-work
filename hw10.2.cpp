#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
int n; 

cout << "Enter the amount of dollars: ";
cin >> n;

int barEat = n; 
int coup = n; 

while(coup >= 6){
  barEat++;
  coup -= 6; 
  coup++; 
}

cout << "Chocolate bars eaten: " << barEat <<  endl;
cout << "Coupon left: " << coup <<  endl;

  return 0;
}