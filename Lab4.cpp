#include<iostream>
#include<cmath>

using namespace std;
int main(){

  int hour, minute;
  string period = "AM";

  cout << "Enter the hour: ";
  cin >> hour;
  
  cout << "Enter the minute: ";
  cin >> minute;

  if (hour >= 12){
    period = "PM"; 
      if (hour > 12) {
        hour -= 12; 
      }
  } else {
      period = "AM";
      if (hour == 0) {
        hour = 12;
    }
  }

  cout << hour << ":";

  if (minute < 10){
    cout << "0"; 
  }
  cout << minute << " " << period << endl; 

  return 0;
}