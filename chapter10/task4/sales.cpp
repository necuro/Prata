#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "sales.h"

SALES::Sales::Sales()
{
   for( int i = 0; i != QUARTERS; i++ )
      sales[i] = 0;

   average = 0;
   max = 0;
   min = 0;
}

SALES::Sales::Sales( const double arr[], int size )
{
   double arrCopy[size];
   for( int i = 0; i != size; i++ )
      arrCopy[i] = arr[i];


   double tmp;
   for( int i = 0; i != (size - 1); i++ )
   {
      for( int j = 0; j != (size - 1); j++ )
      {
         if( arrCopy[j] > arrCopy[j+1] )
         {
            tmp = arrCopy[j];
            arrCopy[j] = arrCopy[j+1];
            arrCopy[j+1] = tmp;
         }
      }
   }

   average = 0;
   for( int i = 0; i != QUARTERS; i++)
   {
      sales[i] = arrCopy[i];
      average += sales[i];
   }
   average /= QUARTERS;
   max = sales[QUARTERS-1];
   min = sales[0];
   
   
}

void SALES::Sales::setSales()
{
   double tmpArr[QUARTERS];
   for( int i = 0; i != QUARTERS; ++i )
   {
      cout << "Enter sale for " << i+1 << " quarter: ";
      while( !(cin >> tmpArr[i]) )
      {
         cin.clear();
         while( cin.get() != '\n' )
            continue;
         cout << "Enter sale for " << i+1 << " quarter: ";
      }
   }

   Sales tmpSales( tmpArr, QUARTERS );
   *this = tmpSales;
}

void SALES::Sales::showSales() const
{
   for( int i = 0; i != QUARTERS; i++ )
   {
      cout << "Sales[" << i+1 << "]: " << sales[i] << endl;
   }
   cout << "Agerage: " << average << endl;
   cout << "Max: " << max << endl;
   cout << "Min: " << min << endl;
}





















