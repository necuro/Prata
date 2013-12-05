#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double add( double, double );
double subtract( double, double );
double multiply( double, double );
double division( double, double );
double calculate( double, double, double (*pf)( double, double ) );

int main(void)
{
   double x, y;
   cout << "Calculator :)\n";
   cout << "Enter two double: ";
   while( !(cin >> x >> y) )
   {
      cin.clear();
      while(cin.get() != '\n')
         continue;
      cout << "Enter two double: ";
   }

   cin.get();
   char ch;
   cout << "Enter operation( '+' '-' '*' '/' ): ";
   cin >> ch;
   while( ch != '+' && ch != '-' && ch != '*' && ch != '/' )
   {
      while( cin.get() != '\n' )
         continue;
      cout << "Enter operation( '+' '-' '*' '/' ): ";
      cin >> ch;
   }
/*
const int FCount = 4;
double (*ap[FCount])(double, double) = { add, subtract, multiply, division };
for ( int i = 0; i < FCount; i++ )
{
   cout << ap[i]( x, y ) << endl;
}
*/

   switch( ch )
   {
   case '+':
      cout << "Res: " << calculate( x, y, add ) << endl;
      break;
   case '-':
      cout << "Res: " << calculate( x, y, subtract ) << endl;
      break;
   case '*':
      cout << "Res: " << calculate( x, y, multiply ) << endl;
      break;
   case '/':
      cout << "Res: " << calculate( x, y, division ) << endl;
      break;
   default:
      cout << "!!!Hello David!!!" << endl;
      break;
   }
   return 0;
}

double add( double xVal, double yVal )
{
  return xVal + yVal;
}

double subtract ( double xVal, double yVal )
{
  return xVal - yVal;
}

double multiply( double xVal, double yVal )
{
   return xVal * yVal;
}

double division( double xVal, double yVal )
{
   if( 0 == yVal )
   {
     cout << "Enter two double: ";
     while( !(cin >> xVal >> yVal) )
     {
        cin.clear();
        while(cin.get() != '\n')
           continue;
        cout << "Enter two double: ";
     }
   }

   return xVal / yVal;
      
}

double calculate( double xVal, double yVal, double (*pf)( double , double ))
{
   return (*pf)( xVal, yVal );
}
