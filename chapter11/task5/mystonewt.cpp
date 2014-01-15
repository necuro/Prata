// mystonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "mystonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode m)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = m;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode m)
{
    mode = m;
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    mode = STONE;
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

void Stonewt::setmode( Mode m )
{
   mode = m;
}

// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}

std::ostream & operator<<(std::ostream& os, const Stonewt & st)
{
   switch(st.mode)
   {
      case Stonewt::STONE:
         os << st.stone << " stone, " << st.pds_left << " pounds\n";
         break;
      case Stonewt::PDS_LEFT:
         os << st.pounds << " pounds\n";
         break;
      case Stonewt::POUNDS:
         os << (int)st.pounds << " rounded pounds\n";
         break;
      default:
         os << "Hello David\n";
         break;
   }
}

Stonewt operator+(const Stonewt& st1, const Stonewt& st2)
{
   return Stonewt( st1.pounds + st2.pounds );
}

Stonewt operator-(const Stonewt& st1, const Stonewt& st2)
{
   return Stonewt( st1.pounds - st2.pounds );
}

Stonewt operator*(const double val, const Stonewt& st1)
{
   return Stonewt( st1.pounds * val );
}

Stonewt Stonewt::operator*( const double val )
{
   return Stonewt( (*this).pounds * val );
}

