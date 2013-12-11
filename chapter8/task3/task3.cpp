#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void StringUp( string& );

int main(void)
{
   string str;
   cout << "Enter a string (q to quit) : ";
   getline( cin, str );
   while( str != "q" )
   {
      StringUp( str );
      cout << str << endl;
      cout << "Next string (q to quit) : ";
      getline( cin, str );
   }

   return 0;
}

void StringUp( string& strRef)
{
   int i = 0;

   while( strRef[i] )
   {
      strRef[i] = toupper( strRef[i] );
      i++;
   }
}
