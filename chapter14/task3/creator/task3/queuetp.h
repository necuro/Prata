#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename T>
class QueueTp
{
private:
   struct Node{ T item; struct Node* next; };
   enum{ Q_SIZE = 10 };
   Node* front;
   Node* rear;
   int items;
   const int qsize;
public:
   explicit QueueTp( int qs = Q_SIZE);
   QueueTp(const QueueTp&);
   ~QueueTp();
   bool isEmpty() const;
   bool isFull() const;
   int queueCount() const;
   bool enqueue( const T item );
   bool dequeue( T item );
   void printQueue() const;
};

//Constructor
template <class T>
QueueTp<T>::QueueTp( int qs) : front(NULL), rear(NULL),
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
bool QueueTp<T>::enqueue( const T item)
{
   if(isFull())
      return false;

   Node * add = new Node;
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

template <class T>
bool QueueTp<T>::dequeue(T item)
{
    if(front == NULL)
        return false;
    item = front->item;
    items--;
    Node* temp = front;
    front = front->next;
    delete temp;
    if(items == 0)
        rear = NULL;

return true;
}

//Copy constructor for printing
template <class T>
QueueTp<T>::QueueTp(const QueueTp& srcQueue)
{
   Node* tempNode = srcQueue.front;
   while(tempNode != NULL)
   {
      T* tempObj = new T(*tempNode);
      enqueue(tempObj);
      tempNode = tempNode->next;
   }
}

template <class T>
void QueueTp<T>::printQueue() const
{
    Node* tempNode = front;
    while(tempNode != NULL)
    {
        tempNode->item->Show();
        tempNode = tempNode->next;
    }
}

template <class T>
QueueTp<T>::~QueueTp()
{
    Node*   temp;
    while( front != NULL )
    {
        temp = front;
        front=front->next;
        delete temp;
    }
}
#endif





















