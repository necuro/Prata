#include <iostream>

int main()
{
   double distance;
   double value;
   std::cout << "input distance and value\n";
   std::cout << "Distance: ";
   std::cin >> distance;
   std::cout << "Value: ";
   std::cin >> value;

   std::cout << "Petrol per Km: " << value / distance * 100 << std::endl; 


   return 0;
}
