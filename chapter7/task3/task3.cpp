#include <iostream>

struct box 
{ 
   char maker[40]; 
   float height; 
   float width; 
   float length; 
   float volume; 
};
 
void printBox( box );
void setBoxVolume( box* );

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
   const int SIZE = 5;
   box arr[SIZE] = { {"Finch", 2.2, 2.2, 2.2, 2.2},
                     {"Drew", 3.3, 3.3, 3.3, 3.3},
                     {"Ace", 4.4, 4.4, 4.4, 4.4},
                     {"MMX", 5.5, 5.5, 5.5, 5.5},
                     {"Fox", 6.6, 6.6, 6.6, 6.6}
                   };


for( int i = 0; i < SIZE; i++ )              
{
  cout << "Box number " << i + 1 << ":\n";
  printBox(arr[i]);
  setBoxVolume( &arr[i] );
  printBox(arr[i]);
  cout << "Press any key";
  cin.get();
}

   return 0;
}

void printBox (box boxVal)
{
   cout << "Box:\n";
   cout << "Height: " << boxVal.height << endl;
   cout << "Width: " << boxVal.width << endl;
   cout << "Length: " << boxVal.length << endl;
   cout << "Volume: " << boxVal.volume << endl;
}

void setBoxVolume( box* boxPtr )
{
   boxPtr->volume = boxPtr->height * boxPtr->length * boxPtr->width;
}
