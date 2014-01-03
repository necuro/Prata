#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "sales.h"

namespace SALES
{
void setSales( Sales& s, const double ar[], int n )
   {
      s.min = s.max = ar[0];
      s.average = 0;
         for( int i = 0; i != QUARTERS; i++ )
         {
            if( i < n )
               s.sales[i] = ar[i];
            else
               s.sales[i] = 0;
            if( s.sales[i] < s.min )
               s.min = s.sales[i];
            if( s.sales[i] > s.max )
               s.max = s.sales[i];
            s.average += s.sales[i]; 
         }
         s.average /= QUARTERS;
   }  

void setSales( Sales& s )
{
   int i = 0;
   s.max = s.average = 0;
   cout << "Input sales for 4 quarters :\n";
   while( i != QUARTERS )
   {
      cout << "Sales[" << i+1 << "]: ";
      while( !(cin >> s.sales[i]) )
      {
         cin.clear();
         while( cin.get() != '\n' )
            continue;
         cout << "Sales[" << i+1 << "]: ";
      }
      if( s.sales[i] > s.max )
         s.max = s.sales[i];
      s.average += s.sales[i]; 
      i++;
   }

   s.min = s.sales[0];
   for( int j = 1; j != QUARTERS; j++ )
   {
      if( s.sales[i] < s.min )
         s.min = s.sales[i];
   }

   s.average /= QUARTERS;
}

void showSales( const Sales& s )
{
   for( int i = 0; i != QUARTERS; i++ )
   {
      cout << "Quarter " << i+1 << ": " << s.sales[i] << endl;
   }
   cout << "Min: " << s.min << endl;
   cout << "Max: " << s.max<< endl;
   cout << "Average: " << s.average << endl;
}

}
