
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

int i = 0, num, count = 0;


srand(time(0));
while(i < 20)
{
  num = rand() % (200 - 100 + 1) + 100;
    cout << num << " ";
   
  if(num % 2 == 1){
    count ++;
    
  }
  i++;
}
  cout <<"\nThe number of odd nummbers is: " << count; 
  
  return 0;
}