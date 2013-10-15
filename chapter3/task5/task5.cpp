#include <iostream>

int main()
{
   long long worldPop;
   long long usPop;
   std::cout << "Enter the world's population: ";
   std::cin >> worldPop;
   std::cout << "Enter the population of the US: ";
   std::cin >> usPop;

   std::cout << "The population of the US is " << static_cast<double>(usPop) / static_cast<double>(worldPop) * 100 << "% of the world population.\n";

   return 0;
}
