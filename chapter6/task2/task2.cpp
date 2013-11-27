#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std:: endl;

int main(void)
{
   const int SIZE = 10;
   double arr[SIZE];
   
   for( char tmp ,int i = 0; i < SIZE; i++ )
   {
      cout << "Input value: ";
      cin.get( tmp );
      while( tmp )
      {
         if( isdigit( tmp ) )
         {
            cout << "It isn't number" << endl;
            break;
         }
      }
      
   }

   return 0;
}
