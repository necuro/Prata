#include <iostream>
#include <ostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstring>
#include "dma.h"

Dma::Dma(const char* l, int r)
{
   label = new char[std::strlen(l) + 1];
   std::strcpy(label, l);
   rating = r;
}

Dma::Dma(const Dma& rs)
{
   label = new char[std::strlen(rs.label) + 1];
   std::strcpy(label, rs.label);
   rating = rs.rating;
}

Dma::~Dma()
{
   delete [] label;
}

void Dma::View() const
{
   cout << "Label: " << label << endl;
   cout << "Rating: " << rating << endl;
}

const char * Dma::GetLabel() const
{
   return(label);
}

int Dma::GetRating() const
{
   return(rating);
}

Dma& Dma::operator=(const Dma& rs)
{
   if(this == &rs)
      return *this;
   delete [] label;
   label = new char[std::strlen(rs.label) + 1];
   std::strcpy(label, rs.label);
   rating = rs.rating;
}

//just invoke Dma constructor
BaseDma::BaseDma(const char* l, int r): Dma(l, r)
{
}

BaseDma::BaseDma(const BaseDma& rs): Dma(rs)
{
}

//my be we don't need it. I'll check it if won't forget
BaseDma::~BaseDma()
{
}

void BaseDma::View() const
{
   Dma::View();
}

BaseDma& BaseDma::operator=(const BaseDma& rs)
{
   if(this == &rs)
      return *this;
   Dma::operator=(rs);
   return *this;
}

std::ostream & operator<<(std::ostream & os, const BaseDma & rs)
{
   rs.View();
   return os;
}

// Public members of LacksDma
LacksDma::LacksDma(const char* c, const char* l, int r) : Dma(l, r)
{
   size_t len = std::strlen(c);
   if(len >= COL_LEN)
   {
      std::strncpy(color, c, COL_LEN - 1);
      color[COL_LEN - 1] = '\n';
   }
   else
   {
      std::strncpy(color, c, len);
      color[len] = '\n';
   }
}

LacksDma::LacksDma(const char * c, const BaseDma & bdma) : 
                                         Dma(bdma.GetLabel(), bdma.GetRating())
{
   size_t len = std::strlen(c);
   if(len >= COL_LEN)
   {
      std::strncpy(color, c, COL_LEN - 1);
      color[COL_LEN - 1] = '\n';
   }
   else
   {
      std::strncpy(color, c, len);
      color[len] = '\n';
   }
}

LacksDma::LacksDma(const LacksDma& rs) : Dma(rs)
{
   std::strcpy(color, rs.color);
}

LacksDma::~LacksDma()
{
}

void LacksDma::View() const
{
   Dma::View();
   cout << "Color: " << color; 
}

LacksDma& LacksDma::operator=(const LacksDma& rs)
{
   if(&rs == this) 
      return *this;
   Dma::operator=(rs);
   std::strcpy(color, rs.color);
   return *this;
}

std::ostream & operator<<(std::ostream & os, const LacksDma & rs)
{
   rs.View();
   return os;
}

//public members of HasDma
HasDma::HasDma(const char * s, const char * l, int r) : Dma(l, r)
{
   size_t len = std::strlen(s) + 1;
   style = new char[len];
   std::strcpy(style, s);
   style[len - 1] = '\n';
}

HasDma::HasDma( const char * s, const BaseDma & bdma) :
                                      Dma(bdma.GetLabel(), bdma.GetRating())
{
   size_t len = std::strlen(s) + 1;
   style = new char[len];
   std::strcpy(style, s);
   style[len - 1] = '\n';
}

HasDma::HasDma(const HasDma & rs) : Dma(rs)
{
   size_t len = std::strlen(rs.style) + 1;
   style = new char[len];
   std::strcpy(style, rs.style);
   style[len - 1] = '\n';
}

HasDma::~HasDma()
{
   delete [] style;
}

void HasDma::View() const
{
   Dma::View();
   cout << "Style: " << style;
}

HasDma & HasDma::operator=(const HasDma & rs) 
{
   if(&rs == this)
      return *this;
   Dma::operator=(rs);
   size_t len = std::strlen(rs.style) + 1;
   style = new char[len];
   std::strcpy(style, rs.style);
   style[len - 1] = '\n';
}

std::ostream & operator<<(std::ostream & os, const HasDma & rs)
{
   rs.View();
   return os;
}













 


