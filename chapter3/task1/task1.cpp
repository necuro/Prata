#include<iostream>

int main()
{
   const int factor = 12;
   int inpInch{};
   std::cout << "Input inches:_";
   std::cin >> inpInch;
   
   std::cout << inpInch / factor << " foots and " << inpInch % factor << " inches" << std::endl;

   return 0;
}
