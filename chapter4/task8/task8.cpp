#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

struct Pizza
{
   string Manufacturer;
   int Diametr;
   double Weight;
};

int main()
{
   Pizza* p1 = new Pizza;   

   cout << "Input info about pizza:\n";
   cout << "Diametr: ";
   cin >> p1->Diametr;
   cin.get();
   cout << "Manufacturer: ";
   getline( cin, p1->Manufacturer );
   cout << "weight: ";
   cin >> p1->Weight;

   cout << "Info about new pizza:" << endl
        << "Manufacturer: " << p1->Manufacturer << endl
        << "Diametr: " << p1->Diametr << endl
        << "Weight: " << p1->Weight << endl;
   
   delete p1;

   return 0;
}
