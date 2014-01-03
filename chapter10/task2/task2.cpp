#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "person.h"

int main()
{
   Person one;
   Person two( "Smythecraft" );
   Person three( "Dimwiddy", "Sam" );

   cout << "Person one:\n";
   one.Show();
   one.FormalShow();
   cout << "Person two:\n";
   two.Show();
   two.FormalShow();
   cout << "Person three:\n";
   three.Show();
   three.FormalShow();

   return 0;
}



