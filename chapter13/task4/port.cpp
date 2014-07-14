#include <cstring>
#include "port.h"

using namespace std;

//
Port::Port(const char* br, const char* st, int b)
{
  brand = new char[strlen(br) + 1];
  strcpy(brand, br);
  
  strncpy(style, st, STYLE_SYZE);

  bottles = b;
}

Port::Port(const Port& rhs)
{
   brand = new char[strlen(rhs.brand) + 1];
   strcpy(brand, rhs.brand);

   strcpy(style, rhs.style);

   bottles = rhs.bottles;
}

Port& Port::operator=(const Port& rhs)
{
   delete [] brand;
   if(&rhs == this)
      return *this;
   brand = new char[strlen(rhs.brand) + 1];
   strcpy(brand, rhs.brand);

   strcpy(style, rhs.style);

   bottles = rhs.bottles;
   
   return *this;
}

Port& Port::operator+=(int bot)
{
   bottles += bot;
   return *this;
}

Port& Port::operator-=(int bot)
{
   if(bottles > 0)
      bottles -= bot;

   return *this;
}

void Port::Show() const
{
   cout << "Brand: " << brand << endl;
   cout << "Kind: " << style << endl;
   cout << "Bottles: " << bottles << endl;
}

ostream& operator<<(ostream& os, const Port& rhs)
{
   os << rhs.brand << ", "
      << rhs.style << ", "
      << rhs.bottles;
}

//VitagePort

const char* VintagePort::vStyle = "vintage";


VintagePort::VintagePort() : Port("none", vStyle) 
{
   nickname = new char[strlen("none") + 1];
   strcpy(nickname, "none");
   year = 0;
}

VintagePort::VintagePort( const char* br,
                          int b,
                          const char* nn,
                          int y)
           :Port( br, vStyle, b )
{
   nickname = new char[strlen(nn) + 1];
   strcpy(nickname, nn);
   year = y;
}

VintagePort::VintagePort(const VintagePort& rhs)
           : Port(rhs)
{
   nickname = new char[strlen(rhs.nickname) + 1];
   strcpy(nickname, rhs.nickname);
   year = rhs.year;
}

VintagePort& VintagePort::operator=(const VintagePort& rhs)
{
   if(this == &rhs)
      return *this;
   Port::operator=(rhs);
   delete [] nickname;
   nickname = new char[strlen(rhs.nickname) + 1];
   strcpy(nickname, rhs.nickname);
   year = rhs.year;

   return *this;
}

void VintagePort::Show() const
{
   Port::Show();
   cout << "Nick Name: " << nickname << endl;
   cout << "Year: " << year << endl;
}

ostream& operator<<(ostream& os, const VintagePort& rhs)
{
   os << (const Port& ) rhs
      << " ," << rhs.nickname
      << " ," << rhs.year;

}


































