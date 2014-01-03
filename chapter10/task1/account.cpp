#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

#include"account.h"

Account::Account()
{
   Name = "Djon Doe";
   Number = "00000000";
   Balance = 0; 
}

Account::Account
        ( string name, string number, double balance ):
        Name(name), Number(number), Balance(balance)
{
}

void Account::show() const
{
   cout << "Account info:\n";
   cout << "Owner: " << Name << endl;
   cout << "ID: " << Number << endl;
   cout << "Balance: " << Balance << endl;
}

void Account::IncBalance( double b )
{
   Balance += b;
}

void Account::DecBalance( double b )
{
  Balance -= b;
}

