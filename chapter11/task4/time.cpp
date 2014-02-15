#include "time.h"

Time::Time()
{
   hours = minutes = 0;
}

Time::Time(int h, int m)
{
   hours = h;
   minutes = m;
}

void Time::AddMin(int m)
{
   minutes += m;
   hours += minutes / 60;
   minutes %= 60;
}

void Time::AddHr(int h)
{
   hours += h;
}

void Time::Reset(int h, int m)
{
   hours = h;
   minutes = m;
}

Time operator+(const Time& t1, const Time& t2)
{
   Time sum;
   sum.minutes = t1.minutes + t2.minutes;
   sum.hours = t1.hours + t2.hours + sum.minutes / 60;
   sum.minutes %= 60;
   return sum;
}

Time operator-(const Time& t1, const Time& t2)
{
   Time diff;
   int tot1, tot2;
   tot1 = t1.minutes + 60 * t1.hours;
   tot2 = t2.minutes + 60 * t2.hours;
   diff.minutes = ( tot1 - tot2 ) % 60;
   diff.hours = ( tot1 - tot2 ) / 60;
   return diff;
}

Time operator*(const Time& t1, const double m)
{
   Time mult;
   long tot = (t1.hours * 60 + t1.minutes) * m;
   mult.minutes = tot % 60;
   mult.hours = tot / 60;
   return mult;
}

Time operator*(const double m, const Time& t1)
{
   return t1 * m;
}

std::ostream& operator<<(std::ostream& ost, const Time& t1)
{
   ost << t1.hours << ":" << t1.minutes;
   return ost;
}
