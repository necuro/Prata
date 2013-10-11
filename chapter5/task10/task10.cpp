#include <iostream>

int main()
{
   unsigned short count;
   std::cout << "Input count of lines: ";
   std::cin >> count;

/*
   for( int i = 0; i != count; i++ )
   {
      for( int j = 0; j != count; j++ )
      {
         if( (count - j) > i + 1 )
            std::cout << ".";
         else
            std::cout << "*";
      }
   std::cout << std::endl;
   }
*/

   int j = 0;
   for( int i = 0; i != count; i++ )
   {
      for( j; j != (count - i - 1); j++ )
         std::cout << ".";
      
      for( j; j != count; j++ )
            std::cout << "*";
    
      std::cout << std::endl;
      j = 0;
   }

   return 0;
}
