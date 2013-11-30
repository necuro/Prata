#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;

int main(void)
{
   const char defFileName[] = "file.txt";
   char fileName[40];
   cout << "You can input file name \"I\" or use default \"D\" value (./file.txt). Please make your choise I/D: ";
   char choise;
   cin >> choise;
   int c = 0;
   while( choise != 'D' && choise != 'I')
   {
        cout << "Please make your choise I/D: ";
        cin >> choise;
   }

   switch( choise )
   {
      case 'I':
            cout << "Input file name:\n";
            cin >> fileName;
            break;
      case 'D':
            cout << "You'he chosen default value: ";
            strcpy(fileName, defFileName);
            cout << fileName << endl;
            break;
      default:
            cout << "Hello David!!!"<< endl;
            break; 
   }

//Create stream for reading file file.txt
   ifstream inpFile(fileName);
   char ch;
   int counter = 0;
   if( inpFile.is_open() )
   {
      while( !inpFile.eof() )
      {
         inpFile.get(ch);
         counter++;
      }
   }
   else
   {
      cout << "Fuck fuck fuck\n";
      exit(EXIT_FAILURE);
   }

   cout << "Number of chars in " << fileName << " : " << counter << endl;

   return 0;
}
