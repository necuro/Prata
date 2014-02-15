#include <iostream>
   using std::cout;
   using std::cin;
   using std::endl;
#include <array>
const int SIZE = 100;

int main()
{
   std::array<long double, SIZE> arr;
   arr[1] = arr[0] = 1L;

   for(int i = 2; i != SIZE; i++)
      arr[i] = i * arr[i-1];
   for(int i = 0; i != SIZE; i++)
      cout << i << "! = " << arr[i] << endl;

/*   for( auto it = arr.begin(); it != arr.end(); ++it )
     cout << *it << endl;
*/

   return 0;
}
