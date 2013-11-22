#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Car
{
   string Name;
   int Year;
};

int main(void)
{
   cout << "How many cars should we put in catalog: ";
   int count{};
   cin >> count;

   Car* cars = new Car[count];

   for( int i = 0; i < count; i++ )
   {
      cout << "Car number " << i + 1 << endl;
      cout << "Input manufacturer: ";
      cin >> cars[i].Name;
      cout << "Input year: ";
      cin >> cars[i].Year;
   }

   cout << "Our collection:" << endl;
   for( int i = 0; i < count; i++ )
   {
     cout << cars[i].Year << "\t" << cars[i].Name << endl;
   }  


   return 0;
}
