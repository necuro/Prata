#ifndef _PLORG_H_
#define _LORG_H_

class Plorg
{
private:
   enum { NAMELEN = 19 };
   char Name[NAMELEN];
   int indexCI;

public:
   Plorg( char n[NAMELEN] = "Prolga");
   void setIndexCI( int );
   void showPlorg() const;
};
#endif
