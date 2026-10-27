#include<iostream>
#include<ctime>

using namespace std; 

int main(){
  
  srand(time(0));
  char choice = 'y';
   
 while (choice == 'Y' || choice == 'y'){
   int numCard = 0;
   cout <<"How many numbers of cards do you want (2, 3, 4, 5): "; 
   cin >> numCard;

  while (numCard < 2 || numCard > 5){
    cout << "Invalid put: (2, 3, 4, 5): ";
    cin >> numCard; 
  }

  int cards[5];
  int sum = 0;
  int ace = 0; 

  cout << "drawn card: ";
  for(int i = 0; i < numCard; i++){
    int cardVal = rand() % 13 + 2; 

    if(cardVal >= 11 && cardVal <= 13 ){
       cards[i] = 10;
      if(cardVal == 11) 
        cout << "J"; 
      else if (cardVal == 12)
        cout <<"Q";   
        else cout << "K"; 
    } else if (cardVal == 14){
      cards[i] = 11;
      cout << "A"; 
    } else  {
        cards[i] = cardVal;
        cout << cardVal << " ";
    }
    sum += cards[i];
    if (cards[i] == 11){
      ace++; 
    }
  }
  cout << endl; 

    while(sum > 21 && ace > 0){
      sum -= 10;
      ace--; 
    }
    
    if(sum > 21){
      cout << "Busted!" << endl;
    } else {
      cout << "Score: " << sum << endl; 
    }
    cout << "Do you want to play agian? (y/n): "; 
    cin >> choice; 
 }

  cout << "Game over."<< endl; 

  return 0; 
}