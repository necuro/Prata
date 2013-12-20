#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "golf.h"

int main( int argc, char* argv[] )
{
   golf g[Len]; 
   int i = -1;
   int res = 1;
   while( (1 == res) && (i != Len) )
   {
      i++;
      res = setgolf(g[i]);
   }

   for( int j = 0; j != i; j++ )
   {
      cout << "Member number: " << j+1 << " :\n";
      showgolf( g[j] );
   }

   return 0;
}
