#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std:: endl;

int main(void)
{
   const int SIZE = 10;
   double arr[SIZE];
   int i = 0;
   
   cout << "Arr [" << i << "]: ";
   while( cin >> arr[i] && i < SIZE )
   {
      if(++i < SIZE)
         cout << "Arr [" << i << "]: ";
   }

   double average = 0;
   for( int j = 0; j < i; j++ ) 
   {
      average += arr[j];
   }
   average /= i ;
   cout << "Average: " << average << endl;

   int counter = 0;
   for( int j = 0; j < i; j++)
   {
      if(arr[j] > average)
         counter++;
   }   
   cout << "Count of members bigger then avegare: " << counter << endl;

   return 0;
}
