#include "mystonewt.h"
#include <iostream>
   using std::cout;
   using std::endl;
   using std::istream;

MyStonewt::MyStonewt( double lbs )
{
   stone = int(lbs) / LbsPerStn;
   pdsLeft = int(lbs) % LbsPerStn + lbs - int(lbs);
   pounds = lbs;
}

MyStonewt::MyStonewt( int stn, double lbs )
{
   stone = stn;
   pdsLeft = lbs;
   pounds = stn * LbsPerStn + lbs;
}

MyStonewt::MyStonewt()
{
   stone = pdsLeft = pounds = 0;
}

MyStonewt::~MyStonewt()
{
}

void MyStonewt::showLbs() const
{
   cout << "Pounds: " << pounds << endl;
}

void MyStonewt::showStn() const
{
   cout << "Stone: " << stone << " pounds: " << pdsLeft << endl;
}

bool MyStonewt::operator==(const MyStonewt& st1) const
{
   return pounds == st1.pounds;  
}

bool MyStonewt::operator<(const MyStonewt& st1) const
{
   return pounds < st1.pounds; 
}

bool MyStonewt::operator>(const MyStonewt& st1) const
{
   return pounds > st1.pounds;
}

bool MyStonewt::operator!=(const MyStonewt& st1) const
{
   return !(*this == st1);
}

bool MyStonewt::operator<=(const MyStonewt& st1) const
{
   return !(*this > st1);
}

bool MyStonewt::operator>=(const MyStonewt& st1) const
{
   return !(*this < st1);
}

