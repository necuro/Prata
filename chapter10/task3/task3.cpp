#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "golf.h"

int main()
{
   Golf g1( "Anton Melnik", 100 );
   g1.showGolf();
   g1.setHandicap( 200 );
   g1.showGolf();

   Golf g2;
   g2.showGolf();
   g2.setGolf();
   g2.showGolf();

   return 0;
}
