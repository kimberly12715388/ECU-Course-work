#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int countSumChar (const string & str)
{
  return str.length();
}

int countLetter(const string& str ){
  int count = 0;
  for (char cha : str){
    if(isalpha(cha)){
      count++;
    }
  }
  return count;
}
// purpose: count
//data needed: string
//data return: num of vowel
int countVowel(const string& str){
  int count = 0; 
  for(char cha: str){
    char lowerCh = tolower(cha);
    if(lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u' ){
      count++;
    }
  }
  return count;
}

int main(){

  string s;

  cout << "Enter a sentence:  ";
  getline(cin, s);

  cout <<"\nResult: "<< endl;
  cout << "Total number of charaters: " << countSumChar(s) << endl;
  cout << "Total letters: " << countLetter(s) << endl; 
  cout << "Total vowels:  " << countVowel(s) << endl;

  return 0; 


}
