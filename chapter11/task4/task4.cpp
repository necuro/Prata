#include <iostream>
   using std::cout;
   using std::cin;
   using std::endl;
#include "time.h"

int main()
{
   Time aida(3, 35);
   Time tosca(2, 48);
   Time temp;

   cout << "Aida and Tosca\n";
   cout << aida << endl << tosca << endl;
   temp = aida + tosca;
   cout << "Aida + Tosca\n";
   cout << temp << endl;
   temp = aida * 1.17;
   cout << "Aida * 1.17 = " << temp << endl;
   cout << "10 * Tosca = " << 10 * tosca << endl;

   return 0;
}
  
