#include<iostream>

using namespace std;

int main(){

char letter; 
cout << "Enter a letter: ";
cin >> letter;

while(!((letter >= 'a' && letter <= 'z' ) || (letter >= 'A' && letter <= 'Z'))){
  cout <<" This is not a letter try agian: "; 
  cin >> letter; 
}

if(letter >= 'a' && letter <= 'z'){
  char result = letter - 32;
  cout << "Converted to upper-case: "<< result << endl;
} else {
  char result = letter + 32;
  cout << "Converted  to lower case: "<< result << endl;
}

return 0;

}