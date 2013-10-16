#include <iostream>
#include <cstring>

int main()
{
   const char delim[] = {", "};
   std::cout << "Enter your first name: ";
   char fname[20];
   getline(std::cin, fname);
   std::cout << "Enter your last name: ";
   char lname[20];
   getline(cin, fname);
   strcat( lname, delim );
   strcat( lname, fname );
   std::cout << "Here's the information in a single string: " << fname << std::endl;

   return 0;
}
