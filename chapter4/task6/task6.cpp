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
   CandyBar candy[] { {"Roshen", 560.5, 300},
                      {"Svitoch", 234.1, 400},
                      {"AVK", 897.4, 500} };

   cout << "Name: " << candy[0].Name << endl
        << "Weight: " << candy[0].Weight << endl
        << "Caloric: " << candy[0].Caloric << endl;

   cout << "Name: " << candy[1].Name << endl
        << "Weight: " << candy[1].Weight << endl
        << "Caloric: " << candy[1].Caloric << endl;

   cout << "Name: " << candy[2].Name << endl
        << "Weight: " << candy[2].Weight << endl
        << "Caloric: " << candy[2].Caloric << endl;

   return 0;
}
