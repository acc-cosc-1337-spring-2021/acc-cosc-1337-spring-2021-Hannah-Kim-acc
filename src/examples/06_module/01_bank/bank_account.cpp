//bank_account.cpp
#include "bank_account.h"

using std::cout;

void BankAccount::deposit(int amount)
{
  if (amount > 0)
  {
    balance += amount;
    bank_balance += amount;
  }
}

void BankAccount::withdraw(int amount)
{
  if(amount>0 && amount<=balance)
  {
    balance-=amount;
    bank_balance -= amount;
  }
}

int BankAccount::bank_balance = 0;

//Friend free function

void friend_display_balance(const BankAccount& account)
{
  cout<<"Friend Display balance: " << account.balance<<"\n";
}

//free function not part of bank account class!

void display_balance(const BankAccount& account)
{
  cout<<"Display balance: "<< account.get_balance()<<"\n";

}

BankAccount get_account(int balance)
{
  BankAccount account(balance);

  return account;
}