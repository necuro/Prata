#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HR = 60;
bool newCustomer( double x );

int main()
{
   std::srand(std::time(0));
   int hours = 100;
   int cyclelimit = MIN_PER_HR * hours;
   double perhour = 1;
   double min_per_cust;
   long turnaways = 0;
   long customers = 0;
   long served = 0;
   long sum_line = 0;
   int wait_time = 0;
   long line_wait = 0;
   double average_wait_time = 0;
//Start
while(average_wait_time < 1)
{
Queue line;
Item temp;
   for(int cycle = 0; cycle != cyclelimit; ++cycle)
   {
      if(newCustomer(MIN_PER_HR / perhour))
      {
         if(line.isFull())
            turnaways++;
         else
         {
            customers++;
            temp.set(cycle);
            line.enQueue(temp);
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
   }

// Ouput results
   if(customers > 0)
   {
      cout << "\ncustomers accepted: " << customers << endl;
      cout << "customers served: " << served << endl;
      cout << "turnaways: " << turnaways << endl;
      cout << "average queue size: ";
      cout.precision(2);
      cout.setf(ios_base::fixed, ios_base::floatfield);
      cout << (double) sum_line / cyclelimit << endl;
      average_wait_time =  (double) line_wait / served;
      cout << "awerage wait time: "
           << average_wait_time << " minutes\n";
      cout << "Customers per hour: " << perhour << endl;
   }
   else
      cout << "No customers!\n";
perhour++;
}
   cout << "Fuck!!!\n";
   return 0;
}

bool newCustomer( double x)
{
   return (std::rand() * x / RAND_MAX < 1);
}


















