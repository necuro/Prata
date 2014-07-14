#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
   int rats		= 101;
   int& rodents		= rats;
   int* squirrel	= &rats;

   cout << "Rats address: " << &rats << endl;
   cout << "Rodents address:" << &rodents << endl;
   cout << "Squirrel address: " << &squirrel << endl;
   cout << "Rats value: " << rats << endl;
   cout << "Rodents value:" << rodents << endl;
   cout << "Squirrel value: " << *squirrel << endl;

   return 0;
}
