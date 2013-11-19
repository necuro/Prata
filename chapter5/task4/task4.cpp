#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
   const int dafnaStart = 100;
   const int lefnaStart = 100;
   const double dafnaRaise = 0.1;
   const double lefnaRaise = 0.05;
   const double dafnaProfit= dafnaStart * dafnaRaise; 
   double dafnaAmount{ 100 };
   double lefnaAmount{ 100 };
   int years{};

   do
   {
      dafnaAmount += dafnaProfit;
      lefnaAmount = lefnaAmount + (lefnaAmount * lefnaRaise);
      years++;
      cout << "Year: " << years << " Dafna: " << dafnaAmount << " Lefna: " << lefnaAmount << endl;
   }
   while ( dafnaAmount >= lefnaAmount);

   return 0;
}
