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
           std::string(l),
           PairArray(ArrayInt(yr, y), ArrayInt(bot, y)),
           m_Ages(y)
{
   time_t theTime = time(NULL);
   struct tm *aTime = localtime(&theTime);
   int year = aTime->tm_year + 1900;

   for(int i = 0; i != y; ++i )
   {
      m_Ages[i] = year - PairArray::first[i]; 
   }
}

Wine::Wine(const char* l, int y) :
           std::string(l),
           PairArray(ArrayInt(y), ArrayInt(y)),
           m_Ages(y)
{ }

void Wine::GetBottles()
{
   time_t theTime = time(NULL);
   struct tm *aTime = localtime(&theTime);
   int year = aTime->tm_year + 1900;

   cout << "Enter " << Label()
        << " data for " << m_Ages.size()
        << " year(s):\n";
   for(int i = 0; i != m_Ages.size(); ++i)
   {
      cout << "Enter year: ";
      cin >> PairArray::first[i];
      cout << "Enter bottles for that year: ";
      cin >> PairArray::second[i];
      m_Ages[i] = year - PairArray::first[i]; 
   }
}

string& Wine::Label()
{
   return (std::string&) *this;
}

int Wine::sum() const
{
   return PairArray::second.sum();
}

void Wine::Show() const
{
   cout << "Wine: " << (std::string) *this << endl;
   for( std::size_t i  = 0;
                    i != PairArray::first.size(); 
                    ++i )
   {
      cout << "Year: " << PairArray::first[i] 
           << " Bottles: " << PairArray::second[i] 
           << " Age: " << m_Ages[i] << endl;
   } 
}





