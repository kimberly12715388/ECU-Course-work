#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){

  int a[10];

  srand(time(0));
  cout << "Orginal : ";
  for(int i = 0; i < 10; i++){
    a[i] = rand() % (200 - 100 + 1) + 100;
    cout << a[i] << " ";
  }

  cout << endl;

  cout << "Reversed: ";
  for(int i = 9; i >= 0; i--){
    cout << a[i] << " ";
  }
  

  return 0;
}