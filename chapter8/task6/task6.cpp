#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

const	int		ArrIntSize	= 6;
const	int		ArrDblSize	= 4;
const	int		ArrChrSize	= 200;

template < typename T >
T maxn( T*, const int );

template <> char* maxn<char*>( char*[], const int );

char * buildStr();

int main(void)
{
	int		arrInt[ArrIntSize];
	double		arrDbl[ArrDblSize];
  	char*		arrChr[ArrChrSize];
	char		ch;
        int		ctOfStr		= 0;
        char		tmp[ArrChrSize];

   cout << "Pl select int( press 'i') or double (press 'd') or char('c'):";
   cin >> ch;
   while( ch != 'i' && ch != 'd' && ch !='c' )
   {
      while( cin.get() != '\n' )
         continue;
      cout << "Pl select int( press 'i') or double (press 'd') or char('c'):";
      cin >> ch;
   }

   switch ( ch )
   {
      case 'i':
         cout << "Pl fill array of int with 6 members.\n";
         for( int i = 0; i < ArrIntSize; i++ )
         {
            cout << "Input member number " << i << " : ";
            cin >> arrInt[i];
            while( !cin )
            {
               cin.clear();
               while( cin.get() != '\n' )
                  continue;
               cout << "Input member number " << i << " : ";
               cin >> arrInt[i];
            }
         }
         cout << "Max value in array is: " << maxn( arrInt, ArrIntSize ) << endl;
         break;
 
      case 'd':
         cout << "Pl fill array of double with 6 members.\n";
         for( int i = 0; i < ArrDblSize; i++ ) 
         {
            cout << "Input member number " << i << " : ";
            cin >> arrDbl[i];
            while( !cin )
            {
               cin.clear();
               while( cin.get() != '\n' )
                  continue;
               cout << "Input member number " << i << " : ";
               cin >> arrDbl[i];
            }
         }
         cout << "Max value in array is: " << maxn( arrDbl, ArrDblSize ) << endl;
         break;

      case 'c':
         cin.get();
         cout << "Input string or leave empty for exit:\n";
         cout << "String number " << ctOfStr << " :\n";
         arrChr[ctOfStr] = buildStr();
         while( strlen(arrChr[ctOfStr]) != 0 )
         {
            ctOfStr++;
            cout << "String number " << ctOfStr << " :\n";
            arrChr[ctOfStr] = buildStr();
         }
         cout << "Count of strings is: " << ctOfStr << endl;
         cout << "Longest string is:\n" << maxn( arrChr, ctOfStr ) << endl;
         break;

      default:
         cout << "Hello David\n";
         break;
   }

   return 0;
}

template < typename T >
T maxn( T* arrVal, const int size )
{
   T max = arrVal[0]; 
   for( int i = 1; i < size; i++ )
   {
      if( arrVal[i] > max )
         max = arrVal[i];
   }

   return max;
}

template <> char* maxn<char*>( char* arrVal[], const int size )
{
   char* max = arrVal[0];
   int maxLen = strlen( max );
   for( int i = 1; i < size; i++ )
   {
      if( strlen(arrVal[i]) > strlen(max) )
      {
         max = arrVal[i]; 
         maxLen = strlen( max );
      }
   }

   return max;
}

char * buildStr()
{
   char tmpStr[200];
   cin.getline( tmpStr, 200);
   int tmpStrLen = strlen( tmpStr );
   char* tmpStrPtr = new char[tmpStrLen + 1];
   strcpy( tmpStrPtr, tmpStr );
   tmpStrPtr[tmpStrLen + 1] = '\0';
  
   return tmpStrPtr;
}

