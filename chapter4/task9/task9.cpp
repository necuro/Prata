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
   CandyBar * candy = new CandyBar [3] { {"Roshen", 560, 300},
                                         {"Svitoch", 2341, 400},
                                         {"AVK", 897, 500} };

   CandyBar* candy1 = new CandyBar { "Mars", 983, 600 };

   cout << "Name: " << candy[0].Name << endl
        << "Weight: " << candy[0].Weight << endl
        << "Caloric: " << candy[0].Caloric << endl;

   cout << "Name: " << candy[1].Name << endl
        << "Weight: " << candy[1].Weight << endl
        << "Caloric: " << candy[1].Caloric << endl;

   cout << "Name: " << candy[2].Name << endl
        << "Weight: " << candy[2].Weight << endl
        << "Caloric: " << candy[2].Caloric << endl;

   delete [] candy;

   return 0;
}
