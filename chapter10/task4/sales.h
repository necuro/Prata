#ifndef _SALES_H_
#define _SALES_H_

namespace SALES
{
class Sales
{
private:
   enum { QUARTERS = 4 };
   double sales[QUARTERS];
   double average;
   double max;
   double min;

public:
   Sales();
   Sales( const double [] , int  );
   void setSales();
   void showSales() const;
};
}
#endif
