#include <iostream>

int main()
{
   const int secInDay = 86400;
   const int secInHour = 3600;
   const int secInMinute = 60;

   long long sec;
   std::cout << "Input seconds: ";
   std::cin >> sec;

   std::cout << sec << "Seconds = " << sec / secInDay << " days, ";
   sec %= secInDay;
   std::cout << sec / secInHour << " hours, ";
   sec %= secInHour;
   std:: cout << sec / secInMinute << " minutes, ";
   sec %= secInMinute;
   std::cout << sec << " seconds\n" ;

   return 0;
}
