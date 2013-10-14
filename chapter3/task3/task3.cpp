#include <iostream>

int main()
{
   const int factorMinInDegr = 60;
   const int factorSecInMin = 60;
   int degr, min, sec;

   std::cout << "Enter a latitude in degrees, minutes, and seconds:\nFirst, enter the degrees: ";
   std::cin >> degr;
   std::cout << "Next, enter the minutes of arc: ";
   std::cin >> min;
   std::cout << "Finally, enter the seconds of arc: ";
   std::cin >> sec;

   std::cout << degr << " degrees, " << min << " minutes, " << sec << " seconds = ";
   min = min + degr * factorMinInDegr;
   sec = sec + min * factorSecInMin;
   std::cout << static_cast<double>(sec) / 3600 << " degrees\n";

   return 0;
}
