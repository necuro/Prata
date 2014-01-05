#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstring>

#include "plorg.h"

Plorg::Plorg( char name[NAMELEN] )
{
   strncpy( Name, name, NAMELEN - 1 );
   indexCI = 50;
}

void Plorg::setIndexCI( int index )
{
   indexCI = index;
}


void Plorg::showPlorg() const
{
   cout << "Plorg name: " << Name << endl;
   cout << "Plorg CI index: " << indexCI << endl;
}
