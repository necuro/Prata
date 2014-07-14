#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
   char ch;
   char temp[80]{};
   int i{}, j{};
   cin.get(ch);
   while( temp != "done" )
   {
      strcpy(temp, ""); 
      i = 0;
      while( ch != ' ' ) 
      {
         temp[i] = ch;
         i++;
         cin.get(ch);
      }
   
   temp[i] = '\n';
   j++;  
   cout << temp << endl;
   cin.get(ch);
   }
//   cout << "Cout of words: " << j << endl;

   return 0;
}
