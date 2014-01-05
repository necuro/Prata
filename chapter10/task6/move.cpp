#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "move.h"

Move::Move( double a, double b ) : x(a), y(b)
{
}

Move Move::add( const Move& refMove ) const
{
   Move tmpMove( x, y );
   tmpMove.x += refMove.x;
   tmpMove.y += refMove.y;

   return tmpMove;
}

void Move::reset( double a, double b )
{
   x = a;
   y = b;
}

void Move::showMove() const
{
   cout << "X: " << x << endl;
   cout << "Y: " << y << endl;
}
