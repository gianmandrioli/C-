//Gian Marco Mandrioli ---  COP1334 - 5793

//program that holds the prices of the five items in five variables. Display each
//item’s price, the subtotal of the sale, the amount of sales tax, and the total.

#include <iostream>
using namespace std;


int main(){
    int priceOfItem1 = 15.95;
    int priceOfItem2 = 24.95;
    int priceOfItem3 = 6.95;
    int priceOfItem4 = 12.95;
    int priceOfItem5 = 3.95;
    int subTotal = priceOfItem5+priceOfItem4+priceOfItem3+priceOfItem2+priceOfItem1;
    int tax = subTotal*0.07;
    int total = subTotal+tax;



    cout << "    Dewars (rocks) $" << priceOfItem1 << "\n";
    cout << "    House Burger   $" << priceOfItem2 << "\n";
    cout << "    Bacon(extra)   $" << priceOfItem3 << "\n";
    cout << "    Caesar Salad   $" << priceOfItem4 << "\n";
    cout << "    Club Soda      $" << priceOfItem5 << "\n";
    cout << "    -------------------" << "\n";
    cout << "    Subtotal       $" << subTotal << "\n";
    cout << "    Tax (7%)       $" << tax << "\n";
    cout << "    -------------------" << "\n";
    cout << "    Total          $" << total << "\n";

}
