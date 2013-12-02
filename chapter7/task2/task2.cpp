#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void)
{
   const int SIZE = 10;
   double arr[SIZE];
   double middle = 0;
   double tmp = 0;
   int i = 0;

   for( i; i != SIZE; i++ )
   {
      cout << "Enter value " << i + 1 << ": ";
      cin >> tmp;
      if( !cin )
      {
         cin.clear();
         while( cin.get() != '\n' )
            continue;
         cout << "Bat input, exit\n";
         break;
      }
      else
      {
         arr[i] = tmp;
      }
   }

   
   for( int j = 0; j < i; j++ )
   {
      cout << arr[j] << " ";
      middle += arr[j];
   }
  
   if( i > 0 )
      cout << "\nMiddle: " << middle / i << endl;
   

   return 0;
}
