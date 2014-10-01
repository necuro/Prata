#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename T>
class QueueTp
{
private:
   struct Node( T item, struct Node* next );
   enum{ Q_SIZE = 10 };
   Node* front;
   Node* rear;
   int items;
   const int qsize;
public:
   explicit QueueTp( int qs = Q_SIZE);
   ~QueueTp();
   bool isEmpty() const;
   bool isFull() const;
   int queueCount() const;
   bool enqueue(    );
   bool dequeue();
};

//Constructor
template <class T>
QueueTp<T>::QueueTp( int qs) : front(nullptr), rear(nullptr),
                               items(0), qsize(qs) {}

//Check if queue is empty
template <class T>
bool QueueTp<T>::isEmpty() const
{
   if(items == 0)
      return true;
return false;
}

//Check if queue is full
template <class T>
bool QueueTp<T>::isFull() const
{
   if(items == qsize)
      return true;
return false;
}

//Return number of elements at queue
template <class T>
int QueueTp<T>::queueCount() const
{
return items;
}

template <class T>
QueueTp<T>::enqueue( const T item)
{
   if(isFull())
      return false;
   Node * add = new Node;
   add->item = item;
   add->next = nullptr;
   items++;
   if(front == nullptr)
      front = add;
   rear->next = add;
   rear = add;

return true
}
#endif





















