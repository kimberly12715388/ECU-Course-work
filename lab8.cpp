
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

  srand(time(0));
  char playAg = 'y'; 

  while(playAg == 'y' || playAg == 'Y'){
    int num = rand() % 101; 
    int guess = 0;
    int tries = 0; 
    bool guessCor = false;
    
    cout << "I'm thinking of a number between 1 and 100."<< endl;
    cout << "You have 10 guesses." << endl << endl;

    while(tries  < 10){
      cout << "Enter your guess: ";
      cin >> guess; 
      tries++; 
      cout << endl; 

      if(guess > num){
        cout << "Too high!" << endl;
      }else if (guess < num){
        cout << "Too low!" << endl;
      }else {
        cout << "Correct! You got it!" << endl;
        guessCor = true; 
        break; 
      }
    }
    if(!guessCor){
      cout << "Out of guesses! The correct number was " << num << endl;
    }
    cout << "\nDo you want to play again? (y/n): ";
    cin >> playAg; 
  }

  cout << "Thanks for playing! Goodbye!"; 
  

  return 0;
}