#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "sales.h"

int main()
{
   double arr[] = { 14, 12, 133, 155, 166, 177};
   SALES::Sales s1( arr, 6 );
   s1.showSales();

   SALES::Sales s2;
   s2.setSales();
   s2.showSales();

   return 0;
}
