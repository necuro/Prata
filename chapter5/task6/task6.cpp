#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std:: endl;
using std:: string;

int main(void)
{
   const int Months = 12;
   const int Years = 3;
   string months[Months] { "January", "February", "March", "April"
                   , "May", "June", "July", "August"
                   , "September", "October", "November", "December"
                   };
   int sales[Years] [Months] {};
   int sums[Years]{};

   cout << "!!!Input sums of sales for 3 years!!!" << endl;
   for( int i = 0; i < Years; i++ )
   {
      cout << "***Year number " << i + 1 << "***" << endl;
      for( int j = 0; j < Months; j++ )
      {
         cout << months[j] << ": ";
         cin >> sales[i] [j];
         sums[i] += sales[i][j];
      }
      cout << "Sum of sales for year number " << i + 1 << " : " << sums[i] << endl;
   }

   cout << "Sums of sales for 3 years: " << sums[0] + sums[1] + sums[2] << endl;

   return 0;
}
