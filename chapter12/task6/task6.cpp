#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "queue.h"

const int MIN_PER_HR = 60;
bool newCustomer( double x );

int main()
{
   std::srand(std::time(0));
   int hours = 100;
   int cyclelimit = MIN_PER_HR * hours;
   double perhour = 1;
   long turnaways = 0;
   long customers = 0;
   long served = 0;
   long sum_line = 0;
   long sum_line1 = 0;
   int wait_time = 0;
   int wait_time1 = 0;
   long line_wait = 0;
   double average_wait_time = 0;
   double rounded_awt = 0;
//Start
while( rounded_awt != 1 )
{
   Queue line, line1;
   Item temp;
   for(int cycle = 0; cycle < cyclelimit; ++cycle)
   {
      if(newCustomer(MIN_PER_HR / perhour))
      {
         if(line.isFull() && line1.isFull())
            turnaways++;
         else
         {
            if(line.queueCount() < line1.queueCount())
            {
               customers++;
               temp.set(cycle);
               line.enQueue(temp);
            }
            else
            {
               customers++;
               temp.set(cycle);
               line1.enQueue(temp);
            }
         }
      }

      if(wait_time <= 0 && !line.isEmpty())
      {
         line.deQueue(temp);
         wait_time = temp.ptime();
         line_wait += cycle - temp.when();
         served++;
      }
      if(wait_time > 0)
         wait_time--;
      sum_line += line.queueCount();

      if(wait_time1 <= 0 && !line1.isEmpty())
      {
         line1.deQueue(temp);
         wait_time1 = temp.ptime();
         line_wait += cycle - temp.when();
         served++;
      }
      if(wait_time1 > 0)
         wait_time1--;
      sum_line += line1.queueCount();
   }

// Ouput results
   if(customers > 0)
   {
      cout << "\ncustomers acceptes: " << customers << endl;
      cout << "customers served: " << served << endl;
      cout << "turnaways: " << turnaways << endl;
      cout << "average queue size: ";
      cout.precision(2);
      cout.setf(ios_base::fixed, ios_base::floatfield);
      cout << (double) sum_line / cyclelimit << endl;
      average_wait_time = (double) line_wait / served;
      cout << "sum_line: " << sum_line << endl;
      cout << "served: " << served << endl;
      cout << "average wait time: "
           << average_wait_time << " minutes\n";
      cout << "Customers per hour: " << perhour << endl;
   }
   else
      cout << "No customers!\n";

perhour++;

   rounded_awt = (floorf(average_wait_time * 100 + 0.5) / 100);

   if(rounded_awt > 1)
   {
   perhour = 1;
   turnaways = 0;
   customers = 0;
   served = 0;
   sum_line = 0;
   sum_line1 = 0;
   wait_time = 0;
   wait_time1 = 0;
   line_wait = 0;
   average_wait_time = 0;
   }

}
   
   cout << "Fuck!!!\n";
   return 0;
}

bool newCustomer( double x)
{
   return (std::rand() * x / RAND_MAX < 1);
}

