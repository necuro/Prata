#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int Seasons = 4;
const char* sNames[Seasons] =  {"Spring", "Summer", "Fall", "Winter"};

struct Expens
{
   double Sum;
};

void fill( Expens [], const int );
void show( Expens [], const int );

int main(void)
{
    Expens expenses[Seasons];

    fill( expenses, Seasons);
    show( expenses, Seasons );
  
   return 0;
}

void fill ( Expens arrVal[], const int arrSize )
{
   for( int i = 0; i != arrSize; i++ )
   {
      cout << "Enter expense for " << sNames[i] << " : ";
      cin >> arrVal[i].Sum;
   }
}

void show( Expens arrVal[], const int arrSize )
{
   for ( int i = 0; i != arrSize; i++ )
   {
      cout << "Expense for " << sNames[i] << " : " << arrVal[i].Sum << endl;
   }
}
