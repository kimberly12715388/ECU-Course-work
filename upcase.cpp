#include<iostream>

using namespace std;

int main(){

  char character; 

  cout << "Enter a character: ";
  cin >> character; 

  if (character >= 'A' && character <= 'Z'){
    cout <<"Upper-case letter" << endl; 

  } else if ( character >= 'a' && character <= 'z'){
      cout <<"Lower-case letter" << endl; 
  } else {
    cout <<"Not a letter" << endl; 
  }

  return 0;
}