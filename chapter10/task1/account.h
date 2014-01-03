#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include<string>
using std::string;

class Account
{
private:
   string Name;
   string Number;
   double Balance; 

public:
   Account();
   Account( string name, string number, double balance );
   void show() const;
   void IncBalance( double );
   void DecBalance( double );
};
#endif

