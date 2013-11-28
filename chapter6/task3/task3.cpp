#include <iostream>

using std::cin;
using std::cout;
using std:: endl;

int main(void)
{
   char ch;
   enum { c, p, t, g};

   cout << "Please enter a c, p, t, or g: ";
   cin >> ch;
   while( ch != '0' )
   {
      switch( ch )
      {
         case 'c' : cout << "You have inputted: " << ch << endl;
                    cout << "Please enter a c, p, t, or g: ";
                    cin >> ch;
                    break;
         case 'p' : cout << "You have inputted: " << ch << endl;
                    cout << "Please enter a c, p, t, or g: ";
                    cin >> ch;
                    break;
         case 't' : cout << "You have inputted: " << ch << endl; 
                    cout << "Please enter a c, p, t, or g: ";
                    cin >> ch;
                    break;
         case 'g' : cout << "You have inputted: " << ch << endl;
                    cout << "Please enter a c, p, t, or g: ";
                    cin >> ch;
                    break;
         default:   cout << "You have inputted: " << ch << endl;
                    cout << "Please enter a c, p, t, or g: "; 
                    cin >> ch;
                    break;
      }
   }

   return 0;
}
