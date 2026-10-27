#include<iostream>

using namespace std;

int main(){

  char letter; 

  cout << "Enter an Uppercase letter: ";
  cin >> letter;

  switch (letter)
  {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'Y':
        cout << "This is a vowel";
        break;
      
      default:
        cout << "This is a consonant";
        break;

  }



  return 0; 
}