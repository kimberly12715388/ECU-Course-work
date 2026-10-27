#include<iostream>
#include<string>

using namespace std;

string ceaser(string s, int shift){
  for(int i = 0; i < s.length(); i++){
    char ch = s[i]; 

    if( ch >= 'A' && ch <= 'Z'){
      ch = char((ch - 'A' + (shift % 26) + 26) % 26 + 'A');
      s[i] = ch; 
    } else if(ch >= 'a' && ch <= 'z'){
      ch = char((ch - 'a' +(shift % 26) + 26 ) % 26 + 'a');
      s[i] = ch; 
    }
  }
  return s; 
}

int main (){

  string s;
  int shift;

  cout << "text: "; 
  getline(cin, s);

  cout <<"shift: ";
  cin >> shift;

  string encoded = ceaser(s,shift); 
  cout << "  "<< encoded << endl; 
}