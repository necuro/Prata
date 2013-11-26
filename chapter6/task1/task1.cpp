#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std:: endl;

int main(void)
{
   char ch;
   cout << "Please input sentence:" << endl;
   cin.get(ch);
   while( ch != '@' )
   {
      if( isalpha( ch ) )
      {
         if( isupper( ch ) )
            ch = tolower( ch );
         else
            ch = toupper( ch );
      }
      
     cout << ch;
     cin.get(ch);
   }

   cout << endl;
   return 0;
}
