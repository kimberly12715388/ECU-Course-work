#include<iostream>

using namespace std;

int main(){

  int green, red;
  cin >> green >> red;
  
  int health = 0;

  int mix;
  if (green < red){
      mix = green; 
  } else {
      mix = red;
  }

  health = health + mix * 10; 
  green = green - mix;

  health = health + (green / 3) * 10; 
  green = green % 3;

  if (green == 2){
    health = health + 3; 
  } else if (green == 1 ){
      health = health + 1;
  }

  cout << health << endl; 

  return 0;
}