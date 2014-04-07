#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "stack.h"

int main()
{
    const int SIZE = 8;
    Stack st1(SIZE);
    int i = 0;
    while(i++ != SIZE)
    {
       st1.push(i);
    }
    
    Stack st2(st1);
    if(st2.isFull())
       cout << "Stack st is full\n";
    else
       cout << "Stack st isn't full\n";

    Stack st3 = st2;

    Item val = 0;
    for(int i = 0; i != SIZE; ++i)
    {
       st2.pop(val);
       cout << "Value " << i << " :" << val << "\n";
    }

    while(!st3.isEmpty())
    {
       st3.pop(val);
       cout << "Value " << i << " :" << val << "\n";
    }

    return 0;
}
