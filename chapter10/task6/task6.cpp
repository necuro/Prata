#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "move.h"

int main()
{
   Move m1( 10, 20 );
   Move m2( 20, 30 );
   Move m3;
   
   cout << "Move1:\n";
   m1.showMove();
   cout << "Move2:\n";
   m2.showMove();
   cout << "Move3:\n";
   m3.showMove();

   cout << "Move3 = Move1 + Move2:\n";
   m3 = m1.add( m2 );
   m3.showMove();

   cout << "Reset Move3 to X = 100, Y = 100:\n";
   m3.reset( 100, 100 );
   m3.showMove();

   return 0;
}
