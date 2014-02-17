#ifndef _MYSTONEWT_H_
#define _MYSTONEWT_H_
#include <istream>
   using std::istream;

class MyStonewt
{
private:
   enum{LbsPerStn = 14};
   int stone;
   double pdsLeft;
   double pounds;

public:
   MyStonewt(double lbs);
   MyStonewt(int stn, double lbs);
   MyStonewt();
   ~MyStonewt();
   void showLbs() const;
   void showStn() const;

   bool operator==(const MyStonewt& st1) const;
   bool operator<(const MyStonewt& st1) const;
   bool operator>(const MyStonewt& st1) const;
   bool operator!=(const MyStonewt& st1) const;
   bool operator<=(const MyStonewt& st1) const;
   bool operator>=(const MyStonewt& st1) const;


};
#endif
