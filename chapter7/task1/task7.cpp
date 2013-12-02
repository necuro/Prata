#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double middleGarmonic( double, double );

int main(void)
{
   double x, y;
   cout << "input two double: ";
   
   while ( (cin >> x >> y) && ( x != 0 && y != 0 ) )
   {
      cout << "Middle: " << middleGarmonic( x, y ) << endl;
      cout << "input two double: ";
   }

   return 0;
}

double middleGarmonic( double xVal, double yVal )
{
   return (2 * xVal * yVal) / ( xVal + yVal );
}
