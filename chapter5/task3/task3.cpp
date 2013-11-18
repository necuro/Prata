#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
   cout << "Input value: ";
   double val{};
   double sum{};

   cin >> val;
   while ( val != 0 )
   {
      sum += val;
      cout << "Sum: " << sum << endl;
      cout << "Input value: ";
      cin >> val;
   }

   return 0;
}
