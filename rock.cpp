#include<iostream>

using namespace std;

int main(){

  char option1, option2; 

    cout << "Enter P for paper, R for rock, and S for scissors: ";

    cin >> option1;
    cin >> option2;

    if(option1 == 'P' || option1 == 'p'){
      if(option2 == 'r' || option2 == 'R'){
        cout << "Paper covers rock"; 
      } else if (option2 == 'S' || option2 == 's'){
          cout << "Scissors cuts paper";
      } else { 
          cout << "Nobody wins"; 
      }

    } else if (option1 == 'R' || option1 == 'r'){
      if(option2 == 'P' || option2 == 'p'){
        cout << "Paper covers rock";
      } else if (option2 == 'S' || option2 == 's'){
          cout << "Rock breaks scissors";
      } else {
          cout << "Nobody wins";
      }

    } else if (option1 == 'S' || option1 == 's'){
        if (option2 == 'r' || option2 == 'R'){
          cout << "Rock breaks scissors";
        } else if (option2 == 'P' || option2 == 'p'){
            cout << "Scissors cuts paper";
        } else {
            cout << "Nobody wins";
        }
    }




  return 0;
}