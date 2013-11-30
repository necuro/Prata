#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void)
{
   const int SIZE = 4;
   const double taxes[SIZE] = { 0.00, 0.10, 0.15, 0.20 };
   const int gains[SIZE] = { 5000, 10000, 20000, 35000 };

   int incoming;
   double tax = 0;
   cout << "Input pls something int: ";
   int i = 0;
   while( cin >> incoming )
   {
      tax = 0;
      i = 0;
      
      do
      {
         if( incoming > gains[i] )
         {
//         cout << "Incoming: " << incoming << endl;
//         cout << "taxes: " << taxes[i] << endl;
            tax += (taxes[i] * gains[i]);
            incoming -= gains[i];
//         cout << "Tax: " << tax << endl;
//         cout << "i: " << i++ << endl;
            i++;
         }
         else
         {
//         cout << "Incoming: " << incoming << endl;
//         cout << "taxes: " << taxes[i] << endl;
            tax += (taxes[i] * incoming); 
            incoming -= gains[i];
//         cout << "Tax: " << tax << endl;
//         cout << "i: " << i++ << endl;
            i++;
         }
      }
      while( incoming > 0 );

      cout << "Tax: " << tax << endl;
      cout << "Input pls something int: ";
   }


   return 0;
}
