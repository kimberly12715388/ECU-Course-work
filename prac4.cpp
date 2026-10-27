#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
int num = 1;
int larger;

srand(time(0));
for(int i = 1; i <= 10; i++){
  cin >> num;

  if(i == 1){
     larger = num;

  } else if( num > larger){
      larger = num;
  }

}

  return 0;
}