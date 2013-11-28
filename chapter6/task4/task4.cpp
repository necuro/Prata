#include <iostream>

using std::cin;
using std::cout;
using std:: endl;

const int strsize = 25;

struct bop { 
char fullname[strsize]; // реальное имя 
char title[strsize]; // должность 
char bopname[strsize]; // секретное имя БОП 
int preference; // 0 = полное имя, 1 = титул, 2 = имя БОП 
}; 

int main(void)
{
   const int SIZE = 5;
   bop arrBop[SIZE] = {{ "Anton", "Software engineer)", "finch", 2 },
                       { "Dasha", "Software tester)", "Drew", 1},
                       { "Mihalych", "Master Yoda", "MMX", 0 },
                       { "Lis", "Junior software engineer", "Fox", 0 },
                       { "Dima", "Master of photo", "Ace", 2}};
   char choice;

   cout << "Benevolent Order of Programmers Report" << endl;
   cout << "a. display by name b. display by title" << endl;
   cout << "c. display by bopname d. display by preference" << endl;
   cout << "q. quit" << endl;
   cout << "Enter your choice:";
   cin >> choice;
   while( choice != 'q' )
   {
      switch( choice )
      {
      case 'a':
              for( int i = 0; i < SIZE; i++)
                 cout << arrBop[i].fullname << endl;
              cout << "Enter your choice:";
              cin >> choice;
              break;
      case 'b':
              for( int i = 0; i < SIZE; i++)
                 cout << arrBop[i].title << endl;
              cout << "Enter your choice:";
              cin >> choice;
              break;
      case 'c':
              for( int i = 0; i < SIZE; i++)
                 cout << arrBop[i].bopname << endl;
              cout << "Enter your choice:";
              cin >> choice;
              break;
      case 'd':
              for( int i = 0; i < SIZE; i++)
              {
                 switch( arrBop[i].preference )
                 {
                 case 0:
                        cout << arrBop[i].fullname << endl;
                        break;
                 case 1:
                        cout << arrBop[i].title << endl;
                        break;
                 case 2:
                        cout << arrBop[i].bopname << endl;
                        break;
                 default:
                       cout << "Who are you?" << endl;
                       break;
                 }
              }
              cout << "Enter your choice:";
              cin >> choice;
              break;
      default:
              cout << "Enter your choice:";
              cin >> choice;
              break;
     } 
   }

   return 0;
}
