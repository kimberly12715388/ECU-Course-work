#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
int num;
int sum = 0;
int small =0;

srand(time(0));
cout <<"Gen num: ";

for(int i = 1; i <= 10; i++){
  num = rand() % 101 + 100; 
  cout << num << " ";
  
  sum += num;

  if(i == 1){
     small = num;

  } else if( num < small){
      small = num;
  }
}
cout << endl; 

double ave = sum / 10.0;

cout << "average: " << ave << endl;
cout << "smallest: " << small << endl;




  return 0;
}