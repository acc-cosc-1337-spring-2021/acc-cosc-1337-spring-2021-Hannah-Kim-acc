#include <iostream> 

#include "bank_account.h"
#include "atm.h"

using std::cout;


int main()
{
  BankAccount account = get_account(100);
  ATM atm(account);

  atm.display_balance();
  
  friend_display_balance(account);
  display_balance(account);

  cout<<"Balance: "<<account.get_balance()<<"\n"; 

  cout<<"Deposit $50\n";
  account.deposit(50);
  cout<<"Balance: "<<account.get_balance()<<"\n"; 

  cout<<"Depoist $10\n";
  account.withdraw(10);
  cout<<"Balance: "<<account.get_balance()<<"\n"; 

	return 0;
}

