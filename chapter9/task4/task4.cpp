#include <iostream>
#include "sales.h"

using namespace SALES;

int main( int argc, char** argv )
{
   Sales s1, s2;
   double arr[] = { 11, 22, 33, 44, 55};
   setSales( s1, arr, 3 );
   showSales( s1 );
   
   setSales( s2 );
   showSales( s2 );

   return 0;
}
