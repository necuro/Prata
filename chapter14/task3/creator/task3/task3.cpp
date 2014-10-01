#include "worker.h"
#include "queuetp.h"
#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 5;
int main()
{
   QueueTp<Worker *> stWorkerPtr;
   int ct;
   for(ct = 0; ct < SIZE; ct++)
   {
      char choice;
      cout << "Enter the employee category:\n"
              "w: waiter s: singer "
              "t: singing waiter q: quit\n";
      cin >> choice;
      while( strchr("wstq", choice) == NULL )
      {
         cout << "Please enter a w, s, t or q: ";
         cin >> choice;
      }
      if(choice == 'q')
         break;
      Worker* newWorkerPtr;
      switch(choice)
      {
         case 'w':
                 newWorkerPtr  = new Waiter;
                 break;
         case 's':
                 newWorkerPtr = new Singer;
                 break;
         case 't':
                 newWorkerPtr = new SingingWaiter;
                 break;
      }
      cin.get();
      newWorkerPtr->Set();
      stWorkerPtr.enqueue(newWorkerPtr);
   }

   cout << "\nHere is your staff:\n";
   stWorkerPtr.printQueue();

   cout << "Bye!\n" ;

return 0;
}

