#ifndef _MOVE_H_
#define _MOVE_H_

class Move
{
private:
   double x;
   double y;

public:
   Move( double a = 0, double b = 0 );
   void showMove() const;
   Move add( const Move& ) const;
   void reset( double a = 0, double b = 0 );
};
#endif
