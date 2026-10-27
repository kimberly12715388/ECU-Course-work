
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

  int count = 0; 

  srand(time(0));
  for(int i = 0; i < 20; i++){
    int num = rand() % (200 - 100 + 1)+ 100;
    cout << num << " "; 

      if(num % 2 != 0){
        count ++; 
     }
  }
  cout <<"\nThe number of odd nummbers is: " << count;

  return 0;
}