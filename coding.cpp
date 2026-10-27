#include<iostream>
#include<ctime>

using namespace std;

int main(){

  int a[15]; 
  
  srand(time(0));
  for(int i = 0; i < 15 ; i++){
    a[i] = rand() % 101;
    cout << a[i] << " ";
  }
  cout << endl; 

  double sum = 0;
  int high = a[0], low = a[0];

  for(int i = 0; i < 15; i++){
    sum += a[i];

    if(a[i] > high){
      high = a[i]; 
    }
    if(a[i] < low){
      low = a[i]; 
    }
  }

  double ave = sum / 15.0;
  
  cout <<" highest grade: " << high << endl;
  cout <<" lowest grade: " << low << endl;
  cout <<" average grade: " << ave << endl;

  return 0;
}