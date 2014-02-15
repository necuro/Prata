#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int NumOfCalls = 0;

void printString( const char*, int n = 0 );


int main(void)
{
   char string[100];
   int num;

   cout << "Input number or q for quit: ";
   while( cin >> num )
   {
      cout << "Enter string: ";
      cin >> string;
      printString( string, num );
      cout << "Input number or q for quit: ";
   }

   cout << "Bye\n";
   return 0;
}

void printString( const char* pArrChar, int n )
{
   if( n != 0 )
   {
      for( int i = 0; i < NumOfCalls; i++ )
         cout << pArrChar << endl;
      cout << "String was printed " << NumOfCalls << " times\n";
   }
   else
   {
      cout << pArrChar << endl;
   }
   
   ++NumOfCalls;
}
