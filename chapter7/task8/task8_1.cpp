#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int Seasons = 4;
const char* sNames[Seasons] =  {"Spring", "Summer", "Fall", "Winter"};

void fill( double [], const int );
void show( const double*, const int );

int main(void)
{
   double expenses[4];

   fill( expenses, Seasons);
   show( expenses, Seasons );

   return 0;
}

void fill( double arrVal [], const int arrSize)
{
   for( int i = 0; i != arrSize; i++ )
   {
      cout << "Enter value for " << sNames[i] << " : ";
      cin >> arrVal[i];
   }
}

void show( const double* arrVal, const int arrSize )
{
   for( int i = 0; i != arrSize; i++ )
   {
      cout << sNames[i] << " : " << *(arrVal + i) << endl;
   }
}
