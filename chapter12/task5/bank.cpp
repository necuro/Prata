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
   cout << "Case Study: Bank of Heather Automatic Teller\n";
   cout << "Enter maximum of size queue: ";
   int qs;
   cin >> qs;
   Queue line(qs);
   cout << "Enter the number of simulation hours: ";
   int hours;
   cin >> hours;
   long cyclelimit = MIN_PER_HR * hours;
   cout << "Enter the average number of customers per hour: ";
   double perhour;
   cin >> perhour;
   double min_per_cust;
   min_per_cust = MIN_PER_HR / perhour;
   Item temp;
   long turnaways = 0;
   long customers = 0;
   long served = 0;
   long sum_line = 0;
   int wait_time = 0;
   long line_wait = 0;
   
//Start
   for(int cycle = 0; cycle < cyclelimit; ++cycle)
   {
      if(newCustomer(min_per_cust))
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
      cout << "customers acceptes: " << customers << endl;
      cout << "customers served: " << served << endl;
      cout << "turnaways: " << turnaways << endl;
      cout << "average queue size: ";
      cout.precision(2);
      cout.setf(ios_base::fixed, ios_base::floatfield);
      cout << (double) sum_line / cyclelimit << endl;
      cout << "awerage wait time: "
           << (double) line_wait / served << " minutes\n";
   }
   else
      cout << "No customers!\n";
   
   cout << "Fuck!!!\n";
   return 0;
}

bool newCustomer( double x)
{
   return (std::rand() * x / RAND_MAX < 1);
}


















