#include "ShoppingCart.h"
#include <iostream>
#include <vector>
using namespace std;

void ShoppingCart::checkout()
{
  printf("\n%s%6.2f\n", "  Your total is: $", calculateTotal());
  //cout << "  Your total is: " << calculateTotal() << endl;
  cout << "  Thank you for shopping with us today!\n";
}

double ShoppingCart::calculateTotal()
{
  double total = 0;
  auto it = itemsInCart.begin();
  while (it != itemsInCart.end())
  {
    total += (it->first.getPrice() * it->second);
    it++;
  }
  return total;
}

void ShoppingCart::addItem(vector<Product>& products)
{
  
  if (products.size() <= 0)
    return;
    
  cout << "\n  The following item(s) have been added to your cart.\n";
  // print header
  cout << '\n'
       << "    Product ID            Description            Price\n"
       << "   ------------ ------------------------------- -------"
       << '\n';
  
}

void ShoppingCart::printSummary()
{
  if (itemsInCart.empty())
  {
    cout << '\n'
         << "  Your cart is currently empty!\n";
    return;
  }
  
  cout << '\n'
       << "  You currently have " << itemsInCart.size() 
       << " items in your cart."
       << '\n';
  
  // print header
  cout << '\n'
       << "     Quantity            Description            Price\n"
       << "    ---------- ------------------------------- -------"
       << '\n';
 
}

void ShoppingCart::printSummaryToFile()
{

}
