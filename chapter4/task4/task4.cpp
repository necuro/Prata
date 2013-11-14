#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
   string name;
   string sname;
   string fname;
   cout << "Enter your first name: ";
   cin >> name;
   cout << "Enter your last name: ";
   cin >> sname;
   fname = sname + ", " + name;
   cout << "Here's the information in a single string: " << fname << endl; 

   return 0;
}
