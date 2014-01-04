#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstring>

#include "golf.h"

Golf::Golf( char* fn, int hp )
{
   strncpy( fullname, fn, LEN - 1 );
   fullname[ LEN - 1 ] = '\n';
   handicap = hp;
}

Golf::Golf()
{
   strcpy( fullname, "John Doe" );
   handicap = 0;
}

void Golf::setHandicap( int handVal )
{
   cout << "Input handicap: ";
   while( !(cin >> handicap) )
   {
      cin.clear();
      while( cin.get() != '\n' )
         continue;
      cout << "Input handicap: ";
   }
}


void Golf::setGolf( )
{
   char tmpFullName[LEN];
   int tmpHandicap;

   cout << "Enter Full Name: ";
   cin.get();
   cin.getline( tmpFullName, 40 );
 
   cout << "Enter handicap: ";
   while( !(cin >> tmpHandicap) )
   {
      cin.clear();
      while( cin.get() != '\n' )
         continue;
      cout << "Input handicap: ";
   }

   Golf tmpGolf( tmpFullName, tmpHandicap );
  *this = tmpGolf; 

//   return *this;
}


void Golf::showGolf() const
{
   cout << "Full Name: " << fullname << endl;
   cout << "Handicap: " << handicap << endl;
}
