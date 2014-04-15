#include <iostream>
using namespace std;
#include "classic.h"

void Bravo(const Cd& disk);

int main()
{
   Cd c1("Beatles", "Capitol", 14, 35.5);

   Classic c2 = Classic("Piano Sonata in B Flat, Fantasia in C",
                         "Alfred Brendel", "Philips", 2, 57.17);

   Cd* pcd = &c1;
   cout << "Using object directly:\n";
   c1.Report();
   c2.Report();

   cout << "\nUsing type Cd * pointer to objects:\n";
   pcd->Report();
   pcd = &c2;
   pcd->Report();

   cout << "\nCalling a function with Cd reference argument:\n";
   Bravo(c1);
   Bravo(c2);

   cout << "\nTesting assignment:\n";
   Classic copy;
   copy = c2;
   copy.Report();
   
return 0;
}

void Bravo(const Cd& disk)
{
   disk.Report();
}
