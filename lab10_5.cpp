#include<iostream>

using namespace std;

int main(){
 //I have the other array commented out but tested it and it works. 
  int a[10] = {20, 34, 12, 50, 30, 10, 73, 17, 22, 27};
   // int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum = 0; 

  cout << "Arrays elements: "; 
  for(int i = 0; i < 10; i++){
    cout << a[i] << " "; 
  }
  cout << endl; 

  bool found = false; 
  for(int i = 0; i < 10; i++){

    for(int j = i + 1; j < 10; j++){

      if(a[i] + a[j] == 100){
      cout << "Pair found! " << a[i] << " + " <<  a[j] << " = 100"<< endl;
      found = true; 
      break;
    }
  }
  if (found){
    break;
  }
}

  if (!found){
    cout << "No two elements sum to 100"; 
  }

  return 0;
}