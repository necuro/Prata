#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std:: endl;
using std:: string;

int main(void)
{
   const int Months = 12;
   string months[Months] { "January", "February", "March", "April"
                   , "May", "June", "July", "August"
                   , "September", "October", "November", "December"
                   };

   int sales[Months]{};
   int sum{};

   for( int i = 0; i < Months; i++ )
   {
      cout << "Input value for " << months[i] << ": ";
      cin >> sales[i];
      sum += sales[i];
   }

   cout << "Sum: " << sum << endl;;

   return 0;
}
