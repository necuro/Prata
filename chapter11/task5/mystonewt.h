// stonewt.h -- definition for the Stonewt class
#ifndef _MYSTONEWT_H_
#define _MYSTONEWT_H_
#include <iostream>

class Stonewt
{
public:
    enum Mode { STONE, PDS_LEFT, POUNDS };
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
    Mode mode;
public:
    Stonewt(double lbs, Mode m = STONE);          // constructor for double pounds
    Stonewt(int stn, double lbs, Mode m = STONE); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    void setmode( Mode );
    void show_lbs() const;        // show weight in pounds format
    void show_stn() const;        // show weight in stone format
    friend std::ostream & operator<<(std::ostream & os, const  Stonewt & st);
    friend Stonewt operator+( const Stonewt &, const Stonewt &);

    friend Stonewt operator-( const Stonewt &, const Stonewt &);

    friend Stonewt operator*( const double, const Stonewt & );

    Stonewt operator*( const double );

};
#endif
