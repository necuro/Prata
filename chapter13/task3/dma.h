// header for stupid task3
// 
// Dma - base abstract class
// BaseDma, LacksDma, HasDma - derived classes
// 2014.04.19 sad day

#ifndef _DMA_H_
#define _DMA_H_

#include <iostream>
#include <ostream>

class Dma
{
private:
   char*  label; //unknown label
   int    rating; //some unknown rating
public:
   Dma(const  char* l = "null", int r = 0);
   Dma(const Dma&);
   virtual ~Dma();
   virtual void View() const = 0; //pure virtual function
   const char * GetLabel() const;
   int GetRating() const;
//   virtual int GetRating() const = 0;
   virtual Dma& operator=(const Dma&);
// friend for output 
//   friend std::ostream& operator<<(const std::ostream& os, const Dma&);
};

class BaseDma : public Dma
{
public:
   BaseDma(const char* l, int r);
   //BaseDma(); // if need
   BaseDma(const BaseDma&);
   virtual ~BaseDma();
   virtual void View() const;
   BaseDma& operator=(const BaseDma&);
   friend std::ostream& operator<<(std::ostream& os, const BaseDma&);
};

class LacksDma : public Dma
{
private:
   enum {COL_LEN = 40};
   char color[COL_LEN];
public:
   LacksDma(const char* c = "blank", const char* l = "null", int r = 0);
   LacksDma(const char * c, const BaseDma & bdma);
   LacksDma(const LacksDma&);
   virtual ~LacksDma();
   virtual void View() const;
   LacksDma& operator=(const LacksDma&);
   friend std::ostream& operator<<(std::ostream& os, const LacksDma&);
};

class HasDma : public Dma
{
private:
   char* style;
public:
   HasDma(const char* s = "none", const char* l = "null", int r = 0);
   HasDma( const char *, const BaseDma & );
   HasDma(const HasDma&);
   virtual ~HasDma();
   virtual void View() const;
   HasDma& operator=(const HasDma&);
   friend std::ostream& operator<<(std::ostream os, const HasDma&);
};

#endif























