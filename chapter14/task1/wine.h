#ifndef _WINE_H_
#define _WINE_H_

#include <valarray>
#include <string>
#include <utility>

class Wine
{
public:
   Wine(const char* l, int y, 
        const int yr[], const int bot[]);
   Wine(const char* l, int y);
//Set year and count of bottles;
   void GetBottles();
   std::string& Label();
   int sum() const;
   void Show() const;
   
private:
   typedef std::valarray<int> ArrayInt;
   typedef std::pair<ArrayInt, ArrayInt> PairArray;
   
   Wine() {};
   std::string m_Label;
   PairArray   m_PairArray;
   ArrayInt    m_Ages;

};
#endif
