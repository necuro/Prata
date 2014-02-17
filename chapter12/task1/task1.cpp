#include <iostream>
   using std::cin;
   using std::cout;
   using std::endl;
#include "cow.h"

int main()
{
   Cow cow;
   cout << "Cow:\n";
   cow.ShowCow();

   Cow cow1( "Murka", "fucking", 120 );
   cout << "Cow1:\n";
   cow1.ShowCow();

   Cow cow2(cow1);
   cout << "Cow2:\n";
   cow2.ShowCow();
   Cow cow3;
   cow3 = cow2;
   cout << "Cow3:\n";
   cow3.ShowCow();

   return 0;
}

