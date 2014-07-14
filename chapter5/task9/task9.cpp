#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void)
{
   const string pattern = "done";
   string inp;
   string temp{};
   int i{}, j{};
   cin >> inp;
   while( temp != pattern)
   {
      temp = "";
      while( inp[i] != ' ' ) 
      {
         temp += inp[i];
         i++;
      }
      j++;
      cout << temp << endl;
   }
   cout << j << endl;

   return 0;
}
