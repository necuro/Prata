#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstring>
#include "golf.h"

void setgolf( golf& golfRef, const char* namePtr, int handVal )
{
   strncpy( golfRef.fullname, namePtr, Len);
   golfRef.handicap = handVal;
}

int setgolf( golf& golfRef )
{
   int res = 0;
   char fullname[Len];
   int handicap;
   cout << "Name: ";
   cin.getline( fullname, Len );
   if( 0  == strlen(fullname) )
   {
      return res;
   }
   else
   {
      cout << "Input handicap: ";
      while(!(cin >> handicap))
      {
         cin.clear();
         while( cin.get() != '\n' )
            continue;
         cout << "Input handicap: ";
      }
    cin.get();
    res = 1;
   }
   
   setgolf( golfRef, fullname, handicap );
   return res;
}

void handicap( golf& golfRef, int handicap )
{
   golfRef.handicap = handicap;
}

void showgolf( const golf& golfRef )
{
  cout << "Name: " << golfRef.fullname << endl;
  cout << "Handicap: " << golfRef.handicap << endl;
}
