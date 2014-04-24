#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include "dma.h"

BaseDma * CreateBaseDma();
LacksDma * CreateLacksDma();
HasDma * CreateHasDma();
void PrintDma(vector<Dma *>&);
void PrintInvite();
void CinClear();

int main()
{
   cout << "Testing of tha Dma class\n";
   vector<Dma*> p_dma;
   char ch;
   PrintInvite();
   cin >> ch;
   while( ch && ch != 'q')
   {
      while(ch != '1' && ch != '2' && ch != '3' && ch != 'q')
      {
         CinClear();
         PrintInvite();
         cin >> ch; 
      }

      switch(ch)
      {
         case '1':
            CinClear();
            p_dma.push_back( CreateBaseDma() );
            cout << "Created Base\n";
            break;
         case '2':
            p_dma.push_back( CreateLacksDma() );
            cout << "Created Lacks\n";
            break;
         case '3':
            p_dma.push_back( CreateHasDma() );
            cout << "Created Has\n";
            break;
        case 'q':
            continue;
            break;
         default:
            cout << "Hello David!!!\n";
            break;
      }
      
      PrintInvite();
      cin >> ch;
   }

PrintDma(p_dma);

return(0);
}


//Create BaseDma object and return a pointer to it
BaseDma * CreateBaseDma()
{
//label
   const int LABEL_LEN = 50;
   char lbl[LABEL_LEN];
   cout << "Input Label: ";
   cin.getline( lbl, LABEL_LEN );

//rating
   int rating;
   cout << "Input rating: ";
   while( !(cin >> rating) )
   {
      CinClear();
      cout << "Input rating: ";
   }

//creation of the BaseDma class in heap and pointer to it
   BaseDma* tmpBaseDma = new BaseDma( lbl, rating ); 

return( tmpBaseDma ); 
}


LacksDma * CreateLacksDma()
{
//color
   const int COL_LEN = 50;
   char clr[COL_LEN];
   cout << "Input Color : ";
   CinClear();
   cin.getline( clr, COL_LEN );

//we will invoke CreateBaseDma() and use instance of BaseDma for creation LacksDma
   LacksDma * tmpLacksDma = new LacksDma( clr, *(CreateBaseDma()) );

return( tmpLacksDma );
}


HasDma * CreateHasDma()
{
   const int STYLE_LEN = 50;
   char style[STYLE_LEN]   ;
   cout << "Input Style: ";
   CinClear();
   cin.getline( style, STYLE_LEN );

   HasDma * tmpHasDma = new HasDma( style, *(CreateBaseDma()) );

return( tmpHasDma );
}

void PrintDma(vector<Dma *>& pdma)
{
   for( vector<Dma*>::iterator it = pdma.begin(); it != pdma.end(); ++it )
   {
      (*it)->View();
   }
}

void PrintInvite()
{
   cout << "Make your choise. Input:\n"
      << "1: Create BaseDma object\n"
      << "2: Create LacksDma object\n"
      << "3: Create HasDma objects\n"
      << "q: Exit\n"
      << "Your choise is: ";
}

void CinClear()
{
   cin.clear();
   while(cin.get() != '\n')
      continue;
}

