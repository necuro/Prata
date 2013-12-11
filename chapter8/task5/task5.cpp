#include <iostream>

using std::cin;
using std::cout;
using std::endl;

template < typename T >
T max5( const  T* arr );

int main(void)
{
   cout << "Pl check type of vallues is array. For int press 'i', for double press 'd': ";
   char ch;
   cin >> ch;
   while( ch != 'i' && ch != 'd' )
   {
      while( cin.get() != '\n' )
         continue;
      cout << "Pl check type of vallues is array. For int press 'i', for double press 'd': ";
      cin >> ch;
   }

   switch( ch )
   {
      case 'i':
        int arrInt[5];
        cout << "Pl enter five int:\n";
        for( int i = 0; i < 5; i++ )
        {
           cout << "Member number " << i << " : ";
           cin >> arrInt[i];
        }
        cout << "Max value: " << max5( arrInt) << endl;
        break;
        
      case 'd':
        double arrDbl[5];
        cout << "Pl enter five double:\n";
        for( int i = 0; i < 5; i++ )
        {
           cout << "Member number " << i << " : ";
           cin >> arrDbl[i];
        }
        cout << "Max value: " << max5( arrDbl ) << endl;
        break;

      default:
         cout << "Hello David\n";
         break;
   }

   return 0;
}

template < typename T >
T max5( const T* arr )
{
   T max = *arr;
   const T* end = arr + 5;
   while( ++arr != end ) 
   {
      if( *arr > max )
         max = *arr;
   }

   return max;
}
