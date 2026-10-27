#include<iostream>

using namespace std;

int main() {

int burgerQty, sodaQty, saladQty, cheeseQty;

double burgerP = 8.99, sodaP = 2.99, saladP = 10.99, cheeseP = 8.99;

double burgerT, sodaT, saladT, cheeseT; 

 double subTotal, tax = 0.09, total; 

  cout << "Welcome to the Kim's Cafe!" << endl << endl; 
  cout << "Menu: " << endl << endl; 

  cout << "Burger    $" << burgerP << endl << endl; 
  cout << "Soda      $" << sodaP << endl << endl; 
  cout << "Salad     $" << saladP << endl << endl; 
  cout << "Cheesecake   $" << cheeseP << endl << endl << endl;  

  cout << "Enter the number of burgers: ";
  cin >> burgerQty;
  cout << endl;

  cout << "Enter the number of sodas: ";
  cin >> sodaQty; 
  cout << endl;

  cout << "Enter the number of salad: "; 
  cin >> saladQty; 
  cout << endl;

  cout << "Enter the number of cheesecake: ";
  cin >> cheeseQty; 
  cout << endl;

  cout << endl << endl << endl; 
  
  cout << "Order Summary: " << endl << endl; 

   burgerT = burgerQty * burgerP;
   sodaT = sodaQty * sodaP;
   saladT = saladQty * saladP; 
   cheeseT = cheeseQty * cheeseP; 
   
   cout << "Burger (" << burgerQty << "):   $" << burgerT << endl << endl; 
   cout << "Soda (" << sodaQty << "):   $" << sodaT << endl << endl; 
   cout << "Salad (" << saladQty << "):  $" << saladT << endl << endl;
   cout << "Cheesecake (" << cheeseQty << "): $" << cheeseT << endl << endl;

   cout << endl << endl; 

   subTotal = burgerT + sodaT + saladT + cheeseT; 
   double taxAmount = tax * subTotal;
   total = subTotal + taxAmount;  

   cout << "Subtotal:  $" << subTotal << endl << endl;
   cout << "Tax(9%):  $" << taxAmount << endl << endl; 
   cout << "Total Price:  $" << total;

   cout << endl << endl << endl;  

   cout << "Thank You for Your Order!";
   

  return 0; 
}

