
#include<iostream>
#include<cstdlib>
//#include<>

using namespace std;

int main(){

int i = 0, num;


srand(time(0));
while(i < 1)
{
  num = rand() % 101;
  cout << num << " ";
  i++;
}
  
  
  return 0;
}