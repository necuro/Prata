#include "queue.h"
#include <cstdlib>

Queue::Queue( int qs ) : qsize(qs)
{
   front = rear = NULL;
   items = 0;   
}

Queue::~Queue()
{
   Node* tmp;
   while( front != NULL )
   {
      tmp = front;
      front = front->next;
      delete tmp;
   }
}

bool Queue::isEmpty() const
{
   return items == 0;
}

bool Queue::isFull() const
{
   return items == qsize;
}

int Queue::queueCount() const
{
   return items;
}

bool Queue::enQueue( const Item& item )
{
   if(isFull())
      return false;

   Node* add = new Node;
   add->item = item;
   add->next = NULL;
   items++;
   if(front == NULL)
      front = add;
   else
      rear->next = add;
   rear = add;
   return true;
}

bool Queue::deQueue( Item& item )
{
   if(front == NULL )
      return false;
   item = front->item;
   items--;
   Node* tmp = front;
   front = front->next;
   delete tmp;
   if(items == 0)
      rear = NULL;
   return true;
}

void Customer::set( long when )
{
   processtime = std::rand() % 3 + 1;
   arrive = when;
}

