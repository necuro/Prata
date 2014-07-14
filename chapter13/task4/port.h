#ifndef _PORT_H_
#define _PORT_H_

#include <iostream>
using namespace std;

class Port
{
private:
   enum {STYLE_SYZE = 20};
   char*   brand;
   char    style[20];

   int bottles;
public:
   Port(const char* br = "none", const char* st = "none", int b = 0);
   Port(const Port& p);
   virtual ~Port() { delete [] brand; }
   Port& operator=(const Port&);
   Port& operator+=(int);
   Port& operator-=(int);
   int BottleCount() const { return bottles; }
   virtual void Show() const;
   friend ostream& operator<<(ostream& , const Port&);
};

class VintagePort : public Port
{
private:
   static const char* vStyle;
   char* nickname;
   int year;
public:
   VintagePort();
   VintagePort(const char * br, int b,
               const char * nn, int y);
   VintagePort(const VintagePort&);
   ~VintagePort() { delete [] nickname; }
   VintagePort& operator=(const VintagePort&);
   void Show() const;
   friend ostream& operator<<(ostream&,
                              const VintagePort&);
};
#endif
