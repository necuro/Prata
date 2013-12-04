#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int Fill_array( double [], int* );
void Show_array( const double [], const int );
void Reverse_array( double [], int );

int main(void)
{
   int SIZE = 0;
   int val = 0;
   cout << "Input size of array: ";
   cin >> SIZE;

//Check input. If it wrong do it again
   while( (!cin) )
   {
      cin.clear();
      while ( cin.get() != '\n' )
         continue;
      cout << "Do it again!!!\n";
      cout << "Input size of array: ";
      cin >> SIZE;
   }
   
//Create dynamic array using SIZE
   double* arr = new double[SIZE];
   Fill_array( arr, &SIZE );
   Show_array( arr, SIZE );
   Reverse_array( arr, SIZE );
   Show_array( arr, SIZE );

   return 0;
}

int Fill_array( double arrVal[], int* sizeVal )
{
   for( int i = 0; i < *sizeVal; i++ )
   {
      cout << "Input value number " << i << " : ";
      cin >> arrVal[i]; 
   
      if(!cin)
      {
         cin.clear();
         while( cin.get() != '\n' )
            continue;
         *sizeVal = i;
         cout << "Input broken. Current count members of the array is: " << *sizeVal << endl;
         return *sizeVal;
      }
   }

   cout << "Size of array: " << *sizeVal << endl;
   return *sizeVal;
}

void Show_array( const double arrVal[], const int sizeVal )
{
   for(int i = 0; i < sizeVal; i++)
      cout << "arr[" << i << "]: " << arrVal[i] << endl;
}

void Reverse_array( double arrVal[], const int sizeVal )
{
   double tmp;
   for( int i = 1; i != (sizeVal / 2); i++ ) 
   {
      tmp = arrVal[sizeVal - i - 1];
      arrVal[sizeVal - i - 1] = arrVal[i];
      arrVal[i] = tmp;
   }
}
