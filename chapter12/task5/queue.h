#ifndef _QUEUE_H_
#define _QUEUE_H_

class Customer
{
private:
   long		arrive; //arriving time
   int		processtime; // process time
public:
   Customer() { arrive = processtime = 0; }
   void set(long when);
   long when() const { return arrive; }
   int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue
{
private:
   struct Node{ Item item; struct Node* next; }; // struct for node of queue
   enum {Q_SIZE = 10}; // default max size of queue instance
   int		items; // number of items in the queue
   const int	qsize; // max size of queue instance
   Node*	front; // ptr to the front of queue
   Node*	rear;  // ptr to the end of queue
   Queue(const Queue& q) : qsize(0) {} //denied copy constuctor
   Queue& operator=(const Queue& q) {return *this;} //denied assignment statement

public:
   Queue(int qs = Q_SIZE);
   ~Queue();
   bool isEmpty() const;
   bool isFull() const;
   int queueCount() const; 
   bool enQueue(const Item& item);
   bool deQueue(Item& item);
};
#endif
