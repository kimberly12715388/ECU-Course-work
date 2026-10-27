#include<iostream>

using namespace std;

int main(){

int i = 2; 
int p1 = 1;
int p2 = 1;
int f;

while(i < 20){
 f = p1 + p2;
  p2 = p1; 
  p1 = f;
  i++;
}

cout << f; 

  return 0;
}