#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

struct Patron
{
   string Name;
   double Sum;
};

int main(void)
{
   const char fileName[] = "file.txt";
   const int GRAND_LIMIT = 10000;
   int SIZE;
   ifstream inpFile;
   inpFile.open( fileName );
   
//Declare an array of attributes for Grand/Not Grand patrons
   bool grand[SIZE];

   if( !inpFile.is_open() )
      exit(EXIT_FAILURE);
      
   inpFile >> SIZE;
   if ( inpFile.fail() )
      exit(EXIT_FAILURE);
   
//Declare an dynamic array of patrons
   Patron* patrons = new Patron[SIZE];
   int i = 0;
   while ( !inpFile.eof() )
   {
         
      inpFile >> patrons[i].Name;
      inpFile >> patrons[i].Sum;
      if( patrons[i].Sum >= GRAND_LIMIT )
         grand[i] = true;
      else
         grand[i] = false;
      i++; 
   }
   
   cout << "Grand patrons:" << endl;
//Flag if not some kind of patrons
   bool flag;

//Check and print grand patrons
   for(int i = 0; i < SIZE; i++)
   {
      if( grand[i] )
      {
         cout << "Name: " << patrons[i].Name << ", Sum: " << patrons[i].Sum << endl;
         flag = true;
      }

   }

//If we don't have persons Grand patrons
   if( !flag)
      cout << "none\n";

//Check and print not grand patrons
   cout << "Patrons:" << endl;
   flag = false;
   for(int i = 0; i < SIZE; i++)
   {
      if( !grand[i] )
      {
         cout << "Name: " << patrons[i].Name << ", Sum: " << patrons[i].Sum << endl;
         flag = true;
      }
   }

//If we don't have patrons
   if( !flag)
      cout << "none\n";

   

   return 0;
}
