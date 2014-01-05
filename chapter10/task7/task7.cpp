#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstring>

#include "plorg.h"

int main()
{
   Plorg p1;
   cout << "default Plorg:\n";
   p1.showPlorg();


   char name[19];
   cout << "Enter name for new Plorg: ";
   cin.getline( name, 18 );

   Plorg p2( name );
   cout << "New Plorg:\n";
   p2.showPlorg();

   int index;
   cout << "Enter new indeCI: ";
   while ( !(cin >> index) )
   {
      cin.clear();
      while( cin.get() != '\n' )
         continue;
      cout << "Enter new indeCI: ";
   }
   p2.setIndexCI( index );
   cout << "Plorg with updated index:\n";
   p2.showPlorg();


return 0;
}

