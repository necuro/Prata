#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<cstring>

#include"account.h"

int main()
{
   Account ac1( "Anton Melnik", "00000001", 123456 );
   ac1.show();

  char ch;
  double sum;
  while( true )
  {
     cout << "If you want increase balance press 'I', decrease 'D', quit 'Q': ";
     cin >> ch;
     while( (toupper(ch) != 'I') 
          && toupper(ch) != 'D'
          && toupper(ch) != 'Q' )
     {
        cin.clear();
        while( cin.get() != '\n' )
           continue;
        cout << "If you want increase balance press 'I', decrease 'D', quit 'Q': ";
        cin >> ch;
     }

     switch( ch )
     {
        case 'I':
        case 'i':
           cout << "Enter sum for increase: ";
           cin >> sum; 
           ac1.IncBalance( sum );
           ac1.show();
           break;
        case 'D':
        case 'd':
           cout << "Enter sum for decrease: ";
           cin >> sum; 
           ac1.DecBalance( sum );
           ac1.show();
           break;
        case 'Q':
        case 'q':
           cout << "Thank you! Bye!\n";
           break;
           ;
        default:
           cout << "Hello David!!!\n";
           break;
     };
     if( toupper(ch) == 'Q' )
        break;
  }   


return 0;
}
