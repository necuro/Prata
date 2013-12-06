#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const int	NameLen = 40;

struct CandyBar
{
   char		Name[NameLen];
   double	Weight;
   int		Callories;
};

void fillCandyBar( CandyBar& candy, char* name = "Millenuim Munch", double weight = 2.85, int callories = 350);
void printCandyBar(const CandyBar& );

int main(void)
{
   CandyBar	cb;
   char		name[NameLen]; 
   double	weight;
   int		callories;
 
   cout << "Enter values for struct CandyBar or leave empty fieds for default values\n"
        << "Name: Millenuim Munch\n"
        << "Weight: 2.85\n"
        << "Callories: 350\n";
   cout << "Enter Name: ";
   cin.getline( name, NameLen );

   cout << "Enter Weight: ";
   while( !(cin >> weight) )
   {
      cin.clear();
      while( cin.get() != '\n' )
         continue;
      cout << "Enter Weight: ";
   }

   cout << "Enter Callories: ";
   while( !(cin >> callories) )
   {
      cin.clear();
      while( cin.get() != '\n' )
         continue;
      cout << "Enter Callories: ";
   }

   if( !strlen(name) )
      fillCandyBar( cb );
   else
      fillCandyBar( cb, name, weight, callories);
      
   printCandyBar( cb );

   return 0;
}

void fillCandyBar( CandyBar& cbVal, char* nameVal, double weightVal, int calloriesVal)
{
   strcpy( cbVal.Name, nameVal );
   cbVal.Weight = weightVal;
   cbVal.Callories = calloriesVal;
}

void printCandyBar(const CandyBar& cbVal )
{
   cout << "!!!Fucking Candy fucking Bar!!!\n";
   cout << "Name: " << cbVal.Name << endl;
   cout << "Weight: " << cbVal.Weight << endl;
   cout << "Callories: " << cbVal.Callories << endl;
}

