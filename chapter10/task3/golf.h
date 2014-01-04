#ifndef _GOLF_H_
#define _GOLF_H_

class Golf
{
private:
   enum { LEN = 40 };
   char fullname[LEN];
   int handicap;

public:
   Golf( char*, int );
   Golf();
   void setGolf();
   void setHandicap( int );
   void showGolf() const;
};
#endif
