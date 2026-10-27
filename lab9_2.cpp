#include<iostream> 
#include<cmath>

using namespace std;

int main(){

  double x; 

  cout << "Enter an x: "; 
  cin >> x;

 int n = 100;
 double sum = 0.0;
 double term = 1.0; 

 for(int i = 0 ; i < n; i++ ){
       
      double fact = 1;

    for(int j = 1; j <= i; j++){
      fact = fact * j;
      
    }
     term = pow(x, i) / fact;
    sum += term; 
 }

 cout << "the approximated value of e is: " << sum << endl; 


  return 0;
}