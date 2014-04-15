#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strlen;
using std::strcpy;
#include "classic.h"

Cd::Cd()
{
  m_pPerformers = new char[4];
  strcpy(m_pPerformers, "");
  m_pLabel = new char[4];
  strcpy(m_pLabel, "");
  m_nSelections = 0;
  m_dPlayTime = 0.0;
}

Cd::Cd(const char* s1, const char* s2, int sel, double play)
{
   size_t len = strlen(s1) + 1;
   m_pPerformers = new char[len];
   strcpy(m_pPerformers, s1);
   m_pPerformers[len] = '\n';

   len = strlen(s2) + 1;
   m_pLabel = new char[len];
   strcpy(m_pLabel, s2);
   m_pLabel[len] = '\n';

   m_nSelections = sel;
   m_dPlayTime = play;
}

Cd::Cd(const Cd& cd)
{
   size_t len = strlen(cd.m_pPerformers) + 1;
   m_pPerformers = new char[len];
   strcpy(m_pPerformers, cd.m_pPerformers);
   m_pPerformers[len] = '\n';

   len = strlen(cd.m_pLabel) + 1;
   m_pLabel = new char[len];
   strcpy(m_pLabel, cd.m_pLabel);
   m_pLabel[len] = '\n';

   m_nSelections = cd.m_nSelections;
   m_dPlayTime = cd.m_dPlayTime;
}

Cd::~Cd()
{
   delete [] m_pPerformers;
   delete [] m_pLabel;
}

void Cd::Report() const
{
   cout << "Performers: " << m_pPerformers << endl;
   cout << "Label: " << m_pLabel << endl;
   cout << "Selections: " << m_nSelections << endl;
   cout << "PlayTime: " << m_dPlayTime << endl;
}

Cd& Cd::operator=(const Cd& cd)
{
   if(&cd == this)
      return *this;

   delete[] m_pPerformers;
   delete[] m_pLabel;
   size_t len = strlen(cd.m_pPerformers) + 1;
   m_pPerformers = new char[len];
   strcpy(m_pPerformers, cd.m_pPerformers);
   m_pPerformers[len] = '\n';

   len = strlen(cd.m_pLabel) + 1;
   m_pLabel = new char[len];
   strcpy(m_pLabel, cd.m_pLabel);
   m_pLabel[len] = '\n';

   m_nSelections = cd.m_nSelections;
   m_dPlayTime = cd.m_dPlayTime;
}

Classic::Classic() : Cd()
{
   m_pMainPart = new char[4];
   strcpy(m_pMainPart, "");
}

Classic::Classic(const char* mainpart, const char* s1,
                 const char* s2, int sel, double play) :
                 Cd(s1,s2,sel,play)
{
   size_t len = strlen(mainpart) + 1;
   m_pMainPart = new char[len];
   strcpy(m_pMainPart, mainpart);
   m_pMainPart[len] = '\n';
}

Classic::Classic(const Classic& cl) : Cd(cl)
{
   size_t len = strlen(cl.m_pMainPart) + 1;
   m_pMainPart = new char[len];
   strcpy(m_pMainPart, cl.m_pMainPart);
   m_pMainPart[len] = '\n';
}

Classic::~Classic()
{
   delete [] m_pMainPart;
}

void Classic::Report() const
{
   Cd::Report();
   cout << "Main Part: " << m_pMainPart << endl; 
}

Classic& Classic::operator=(const Classic& cl)
{
   if(&cl == this)
      return *this;
   Cd::operator=(cl);
   delete [] m_pMainPart;
   size_t len = strlen(cl.m_pMainPart) + 1;
   m_pMainPart = new char[len];
   strcpy(m_pMainPart, cl.m_pMainPart);
   m_pMainPart[len] = '\n';

return *this;
}








