//bank_account.h
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <iostream>

class BankAccount
{
friend void friend_display_balance(const BankAccount& account);

public:
  BankAccount() = default;
  BankAccount(int b) : balance(b){}
  int get_balance()const {return balance;};
  void deposit(int amount);
  void withdraw(int amount);
  static int get_bank_balance(){return bank_balance;};

private:
  int balance{0};//customer's balance
  static int bank_balance; //total balances of all customers
}; 


//free function not part of bank account class!
void display_balance (const BankAccount& account);
BankAccount get_account(int balance);

#endif 


