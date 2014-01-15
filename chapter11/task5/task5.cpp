#include <iostream>
using std::cout;
#include "mystonewt.h"

int main()
{
   Stonewt st1( 15.3 );
   Stonewt st2( 10.3, Stonewt::POUNDS );
   Stonewt st3( 15.3 );
   cout << "st1: " << st1;
   cout << "st2: " << st2;
   cout << "st3: " << st3;
   Stonewt sum;
   sum = st1 + st2;
   cout << "sum: " << sum;

   Stonewt sub;
   sub = st1 - st2;
   cout << "sub: " << sub;

   Stonewt mult1;
   mult1 = st1 * 5;
   cout << "mult1: " << mult1;

   Stonewt mult2;
   mult2 = st1 * 5;
   cout << "mult2: " << mult2;
 
   return 0;
}


