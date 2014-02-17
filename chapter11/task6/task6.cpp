#include "mystonewt.h"
#include <iostream>
   using std::cin;
   using std::cout; 
   using std:: endl;

   const int SIZE = 6;

int main()
{
   double tmpPounds = 0;
   MyStonewt compareSt;
   MyStonewt arrSt[SIZE] = { MyStonewt( 3, 6 ), 
                          MyStonewt(53, 6),
                          MyStonewt(8, 13) };

   for(int i = 3; i != SIZE; i++)
   {
      cout << "Enter weight of stone number " << i << " : ";
      cin >> tmpPounds;
      arrSt[i] = MyStonewt(tmpPounds);
   }
   for(int i = 0; i != SIZE; i++)
   {
      arrSt[i].showLbs();
   }

   compareSt = arrSt[0];
   for( int i = 1; i != SIZE; i++ )
   {
      if( arrSt[i] < compareSt )
         compareSt = arrSt[i];
   }
   cout << "Min St: ";
   compareSt.showLbs();

   compareSt = arrSt[0];
   for( int i = 1; i != SIZE; i++ )
   {
      if( arrSt[i] > compareSt )
         compareSt = arrSt[i];
   }
   cout << "Max St: ";
   compareSt.showLbs();
   
   int counter;
   compareSt = 11 * 14;
   for( int i = 0; i != SIZE; i++ ) 
   {
      if(arrSt[i] >= compareSt)
         counter++;
   }
   cout << "Number of stones more then 11 stone: " << counter << endl;


   return 0;
}
