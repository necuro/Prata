#include <iostream>
#include <cmath>

int main()
{
   const int factorFootToInch = 12; // 1 foot = 12 inches
   const double factorInchToMeter = 0.0254; // 1 inch = 0.0254 meter
   const double factorPoundsToKG = 2.2; // 1 pound = 1/2.2 KG
   int foots;
   int inches;
   int pounds;
   std::cout << "Input your height (foots and inches) and weight (pounds)\nFoots: ";
   std::cin >> foots;
   std::cout << "Inches: ";
   std::cin >> inches;
   std::cout << "Pounds: ";
   std::cin >> pounds;

   double weight = foots * factorFootToInch + inches * factorInchToMeter;
   std::cout << "Your BMI: " << (pounds / factorPoundsToKG) / ( weight * weight ) << std::endl; 

   return 0;
}
