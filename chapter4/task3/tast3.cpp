#include <iostream>
#include <cstring>

int main()
{
   const char delim[] = {", "};
   std::cout << "Enter your first name: ";
   const short SIZE = 20;
   char fname[SIZE];
   std::cin.getline(fname, SIZE);
   std::cout << "Enter your last name: ";
   char lname[SIZE];
   std::cin.getline(lname, SIZE);
   strcat( lname, delim );
   strcat( lname, fname );
   std::cout << "Here's the information in a single string: " << lname << std::endl;

   return 0;
}
