#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstring>
#include "classic.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
//we should check legnth of inputed string
// and if it more then max allowed value(50)
// chars copy just first 49 from them to mPerformers
  size_t perfLen = std::strlen(s1);
  if(perfLen < MAX_PERFORMERS_SIZE)
  {
     std::strncpy(mPerformers, s1, perfLen);
     mPerformers[perfLen] = '\0';
  }
  else
  {
     std::strncpy(mPerformers, s1, MAX_PERFORMERS_SIZE - 1);
     mPerformers[MAX_PERFORMERS_SIZE - 1] = '\0';
  }

//as well as with mPerformers
  size_t labelLen = std::strlen(s2);
  if(labelLen < MAX_LABEL_SIZE)
  {
     std::strncpy(mLabel, s2, labelLen);
     mLabel[labelLen] = '\0';
  }
  else
  {
     std::strncpy(mLabel, s2, MAX_LABEL_SIZE - 1);
     mLabel[MAX_LABEL_SIZE - 1] = '\0';
  }

  mSelections = n;
  mPlayTime = x;
}

Cd::Cd(const Cd& cd)
{
   std::strcpy(mPerformers, cd.mPerformers);
   std::strcpy(mLabel, cd.mLabel);
   mSelections = cd.mSelections;
   mPlayTime = cd.mPlayTime;
}

Cd::Cd()
{
   std::strcpy(mPerformers, "");
   std::strcpy(mLabel, "");
   mSelections = 0;
   mPlayTime = 0.0;
}

Cd::~Cd()
{}


void Cd::Report() const
{
  cout << "Performers: " << mPerformers << endl; 
  cout << "Label: " << mLabel << endl;
  cout << "Selections: " << mSelections << endl;
  cout << "Playtime: " << mPlayTime << endl;
}

Cd& Cd::operator=(const Cd& cd)
{
   if(&cd == this)
      return *this;
   std::strcpy(mPerformers, cd.mPerformers);
   std::strcpy(mLabel, cd.mLabel);
   mSelections = cd.mSelections;
   mPlayTime = cd.mPlayTime;
}

// Public members of Classic class
Classic::Classic(const char* s1, const char* s2,
                 const char* s3, int n, double x) : Cd(s2, s3, n, x)
{
   size_t partLen = std::strlen(s1);
   if(partLen < MAX_PERFORMERS_SIZE)
   {
      std::strncpy(mMainPart, s1, partLen);
      mMainPart[partLen] = '\0';
   } 
   else
   {
      std::strncpy(mMainPart, s1, MAX_PERFORMERS_SIZE - 1);
      mMainPart[MAX_PERFORMERS_SIZE - 1] = '\0';
   }
} 

Classic::Classic() : Cd()
{
   std::strcpy(mMainPart, "");
}

Classic::Classic(const Classic& cl) : Cd(cl)
{
   std::strcpy(mMainPart, cl.mMainPart);
}

void Classic::Report() const
{
   Cd::Report();
   cout << "Main Part: " << mMainPart << endl;
}

Classic& Classic::operator=(const Classic& cl)
{
   if(&cl == this)
      return *this;
   Cd::operator=(cl);
   std::strcpy(mMainPart, cl.mMainPart);
}










