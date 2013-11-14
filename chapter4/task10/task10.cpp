#include <iostream>
#include <array>

using std::array;
using std::cin;
using std::cout;
using std::endl;

int main()
{
   array< double, 3 > arr;

   cout << "Input first value: ";
   cin >> arr[0];
   cout << "Input second value: ";
   cin >> arr[1];
   cout << "Input third value: ";
   cin >> arr[2];

   cout << "First value: " << arr[0] << endl;
   cout << "Second value: " << arr[1] << endl;
   cout << "Third value: " << arr[2] << endl;
   cout << "Middle:" << (arr[0] + arr[1] + arr[2]) / 3 << endl;

   return 0;
}
