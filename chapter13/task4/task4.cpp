#include <iostream>
#include "port.h"


using namespace std;

int main()
{
   Port p1;
   Port p2("Massandra", "white", 10);

   p1.Show();
   p2.Show();
   cout << "***********\n";

   Port p3(p2);
   p1.Show();
   p2.Show();
   p3.Show();
   cout << "***********\n";

   Port p4;
   p4 = p3;
   p1.Show();
   p2.Show();
   p3.Show();
   p4.Show();
   cout << "***********\n";

   p2 += 1;
   p3 -= 1;
   p1.Show();
   p2.Show();
   p3.Show();
   p4.Show();
   cout << "***********\n";

   cout << p1 << endl
        << p2 << endl
        << p3 << endl
        << p4 << endl;
   cout << "***********\n";

   VintagePort vp1;
   vp1.Show();
   cout << "***********\n";

   VintagePort vp2("Solnechnaya Dolyna",
                    5,"Red", 1997);
   vp1.Show();
   vp2.Show();
   cout << "***********\n";
  
   VintagePort vp3(vp2);
   vp1.Show();
   vp2.Show();
   vp3.Show();
   cout << "***********\n";

   vp1 = vp3;
   vp1.Show();
   vp2.Show();
   vp3.Show();
   cout << "***********\n";

   cout << vp1 << endl
        << vp2 << endl
        << vp3 << endl;
      

return 0;
}
