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
//   cout << "Enter maximum of size queue: ";
//   int qs;
//   cin >> qs;
//   Queue line;
//   cout << "Enter the number of simulation hours: ";
   int hours = 100;
//   cin >> hours;
   int cyclelimit = MIN_PER_HR * hours;
//   cout << "Enter the average number of customers per hour: ";
   double perhour = 1;
//   cin >> perhour;
   double min_per_cust;
//   min_per_cust = MIN_PER_HR / perhour;
//   Queue line;
   long turnaways = 0;
   long customers = 0;
   long served = 0;
   long sum_line = 0;
   int wait_time = 0;
   long line_wait = 0;
   
//Start
   double average_wait_time = 0;
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
//         cout << "cycle1: " << cycle;
//         cout << " temp.when1: " << temp.when() << endl;
            line.enQueue(temp);
         }
      }
      if(wait_time <= 0 && !line.isEmpty())
      {
         line.deQueue(temp);
         wait_time = temp.ptime();
//         cout << "cycle: " << cycle;
//         cout << " temp.when: " << temp.when() << endl;
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
      cout << "\ncustomers acceptes: " << customers << endl;
      cout << "customers served: " << served << endl;
      cout << "turnaways: " << turnaways << endl;
      cout << "average queue size: ";
      cout.precision(2);
      cout.setf(ios_base::fixed, ios_base::floatfield);
      cout << (double) sum_line / cyclelimit << endl;
//      cout << "double line_wait: " << (double) line_wait << endl;
//      cout << "double served: " << served << endl;
      average_wait_time =  (double) line_wait / served;
      cout << "awerage wait time: "
           << average_wait_time << " minutes\n";
      cout << "Customers per hour: " << perhour << endl;
   }
   else
      cout << "No customers!\n";
perhour++;
//cin.get();
}
   cout << "Fuck!!!\n";
   return 0;
}

bool newCustomer( double x)
{
   return (std::rand() * x / RAND_MAX < 1);
}


















