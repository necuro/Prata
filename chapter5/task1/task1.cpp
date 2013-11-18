#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
   cout << "Input smaller value: ";
   int small{};
   cin >> small;
   cout << "Input bigger value: ";
   int big{};
   cin >> big;

   int sum{};
   for( small; small <= big; small++ )
      sum += small;   

   cout << "Sim: " << sum << endl;

   return 0;
}
