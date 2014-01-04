#include <iostream>
using namespace std;

#include <cctype>

#include "CutStack.h"

int main()
{
   Customer tempCustomer;
   Stack st1;
   double Sum = 0;

   char ch;
   cout << "Enter A to add customer, D to delete customer,\n"
        << "Q to quit from application: ";
   while( cin >> ch && toupper(ch) != 'Q' )
   {
      while( cin.get() != '\n' )
         continue;
      if(!isalpha(ch))
         continue;
      switch(ch)
      {
         case 'A':
         case 'a':
            cout << "Enter full name: ";
            cin.getline( tempCustomer.fullname, 35 );
            cout << "Enter payment: ";
            while( !(cin >> tempCustomer.payment) )
            {
               cin.clear();
               while(cin.get() != '\n')
                  continue;
               cout << "Enter payment: ";
            }
            if(st1.push( tempCustomer ))
               cout << "Customer was added\n";
            else
               cout << "Stack is full\n";
            break;
         case 'D':
         case 'd':
            if(st1.pop( tempCustomer ))
            {
               Sum += tempCustomer.payment;
               cout << "Sum: " << Sum << endl;
            }
            else
               cout << "Stack is empty\n";
               break;
           
      }
      cout << "Enter A to add customer, D to delete customer,\n"
        << "Q to quit from application: ";
   }


   return 0;
}
