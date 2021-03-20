//Write the include statement for expressions.h here
#include "expressions.h"
#include <iostream>
#include <iomanip>

//Write include for capturing input from keyboard and displaying output to screen
using std::cin;
using std::cout;
using std::setw;
using std::endl;

int main() 
{
  double meal_amount, tip_rate, tip_amount, tax_amount, total;
  cin >> meal_amount;
  tax_amount = get_sales_tax_amount(meal_amount);
  cout << "Enter tip rate: ";
  cin >> tip_rate;
  tip_amount = get_tip_amount(meal_amount,tip_rate);
  total = meal_amount + tip_amount + tax_amount;

  cout << "Meal Amount: " << setw(5) << meal_amount << endl 
  << "Sales Tax: " << setw(9) << tax_amount << endl 
  << "Tip Amount: " << setw(5) << tip_amount << endl 
  << "Total: " << setw(14) << total;
	return 0;

}

