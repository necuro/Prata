// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "myvect.h"

int max( int*, int );
int min( int*, int );

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector result(0.0, 0.0);
    Vector step;
    double target;
    double dstep;
    int attempts;
//Enter target distance
    cout << "Enter target distance: ";
    while (!(cin >> target))
    {
        cin.clear();
        while(cin.get() != '\n') 
            continue;
        cout << "Enter target distance: ";
    }
//Enter step length
    cout << "Enter step length: ";
    while(!(cin >> dstep))
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Enter step length: ";
    }
//Enter number of attempts
    cout << "Enter number of attempts: ";
    while(!(cin >> attempts))
    {
        cin.clear();
        while( cin.get() != '\n' )
            continue;
        cout << "Enter number of attempts: ";
    }
    int* steps = new int[attempts];
    double average = 0;
    for( int i = 0; i != attempts; ++i )
    {
        steps[i] = 0;
        result.reset(0, 0, Vector::POL);
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, VECTOR::Vector::POL);
            result = result + step;
            steps[i]++;
            average += steps[i];
        }
        cout << "steps[" <<  i << "]: " << steps[i] << endl;
     }

    cout << "Max steps: " << max( steps, attempts ) << endl;
    cout << "Min steps: " << min( steps, attempts ) << endl;
    cout << "Average: " << average / attempts << endl;
     
/*
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
*/
    cout << "Bye!\n";
    return 0; 
}

int max( int* arr, int size ) 
{
   int maxVal = *arr;
   for(int  i = 1; i != size; ++i)
   {
       if( *(arr + i) > maxVal )
          maxVal = *(arr + i);
   }

   return maxVal;
}

int min( int* arr, int size ) 
{
   int minVal = *(arr + 0);
   for(int  i = 0; i != size; ++i)
   {
       if( *(arr + i) < minVal )
          minVal = *(arr + i);
   }

   return minVal;
}
