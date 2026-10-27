#include<iostream>
#include<ctime>

using namespace std;

int main(){

  int a[10];

  for(int i = 0; i < 10; i++){
     a[i] = rand() % (200 - 50 + 1) + 50;
  }

  cout << "the order: ";
  for(int i = 0; i < 10; i++){
    cout << a[i] << " "; 
  }
 cout << endl;
 
 cout << "Reversed order: "; 
  for(int i = 9; i >= 0; i--){
     cout << a[i] << " ";
  }
  cout << endl; 

  


  return 0;
}