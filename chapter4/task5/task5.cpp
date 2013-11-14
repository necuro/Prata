#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

struct CandyBar
{
   string Name;
   double Weight;
   int Caloric;
};

int main()
{
   CandyBar snack{ "Mocha Munch", 2.3, 350 };
   cout << "Candy name: " << snack.Name << endl;
   cout << "Candy weight: " << snack.Weight << endl;
   cout << "Candy caloric: " << snack.Caloric << endl;

   return 0;
}
