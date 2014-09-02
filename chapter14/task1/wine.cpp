#include "wine.h"
#include <valarray>
#include <utility>
#include <string>
#include <iostream>
#include <iterator>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::string;

Wine::Wine(const char* l, int y,
           const int yr[], const int bot[]) : 
           m_Label(l),
           m_PairArray(ArrayInt(yr, y), ArrayInt(bot, y)),
           m_Ages(y)
{
   time_t theTime = time(NULL);
   struct tm *aTime = localtime(&theTime);
   int year = aTime->tm_year + 1900;

   for(int i = 0; i != y; ++i )
   {
      m_Ages[i] = year - m_PairArray.first[i]; 
   }
}

Wine::Wine(const char* l, int y) :
           m_Label(l),
           m_PairArray(ArrayInt(y), ArrayInt(y)),
           m_Ages(y)
{ }

void Wine::GetBottles()
{
   cout << "Enter " << Label()
        << " data for " << m_Ages.size()
        << " year(s):\n";
   for(int i = 0; i != m_Ages.size(); ++i)
   {
      cout << "Enter year: ";
      cin >> m_PairArray.first[i];
      cout << "Enter bottles for that year: ";
      cin >> m_PairArray.second[i];
   }
}

string& Wine::Label()
{
   return m_Label;
}

int Wine::sum() const
{
   return m_PairArray.second.sum();
}

void Wine::Show() const
{
   cout << "Wine: " << m_Label << endl;
   for( std::size_t i  = 0;
                    i != m_PairArray.first.size(); 
                    ++i )
   {
      cout << "Year: " << m_PairArray.first[i] 
           << " Bottles: " << m_PairArray.second[i] 
           << " Age: " << m_Ages[i] << endl;
   } 
}





