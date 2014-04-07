#include "stack.h"

Stack::Stack(int n) : size(n), top(0)
{
    pitems = new Item[size];
}

Stack::Stack(const Stack& st)
{
   size = st.size;
   top = st.top;
   pitems = new Item[size];
   for(int i = 0; i != top; ++i)
      pitems[i] = st.pitems[i];
}

Stack& Stack::operator=(const Stack& st)
{
    if( this == &st )
       return *this;
    size = st.size;
    top = st.top;
    delete [] pitems;
    pitems = new Item[size];
    for(int i = 0; i != top; ++i)
    {
       pitems[i] = st.pitems[i];    
    }
    
    return *this;
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isEmpty() const
{
    return top == 0;
}

bool Stack::isFull() const
{
    return top == size;
}

bool Stack::push(const Item& item)
{
   if(top < size)
   {
      pitems[top++] = item;
      return true;
   }
   else
       return false;
}

bool Stack::pop(Item& item)
{
   if(top > 0)
   {
      item = pitems[--top];
      return true;
   }
   else
      return false;
}
