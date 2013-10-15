#include <iostream>

int main()
{
//ditry but I'm laaazy
   const double factorMile = 62.14; 
   const double factorGallon = 3.875;
   double litresPerKm;
   double gallons;

   std::cout << "Input litres per km: ";
   std::cin >> litresPerKm;
   gallons = litresPerKm / factorGallon;
   std::cout << gallons << std::endl;

   std::cout << "Miles per Gallon: " << factorMile / gallons << std::endl; 
   
   return 0;
}
