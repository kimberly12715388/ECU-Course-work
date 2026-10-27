#include<iostream>

using namespace std; 

int main(){

  double grade; 
  char Lgrade;

  cout <<"Enter grade: "; 
  cin >> grade; 
  
if(grade >= 90){
    Lgrade = 'A';
} else if (grade >= 80){
    Lgrade = 'B'; 
} else if (grade >= 70){
    Lgrade = 'C';
} else if (grade >= 60){
    Lgrade = 'D';
} else {Lgrade = 'F';}

  cout << Lgrade;   

  return 0; 
}