#include <iostream>
#include "worker.h"

Worker::~Worker() {}
void Worker::Data() const
{
   std::cout << "Worker's id: " << id << std::endl;
}
void Worker::Get()
{
   getline(std::cin, fullname);
   std::cout << "Enter worker's ID: ";
   std::cin >> id;
   while(std::cin.get() != '\n')
      continue;
}

void Waiter::Set()
{
   std::cout << "Enter Waiter's name: ";
   Worker::Get();
   Get();
}

void Waiter::Show() const
{
   std::cout << "Category: waiter\n";
   Worker::Data();
   Data();
}

void Waiter::Data() const
{
   std::cout << "Panache raiting: " << panache << std::endl;
}

void Waiter::Get()
{
   std::cout << "Enter Waiter's panache rairing: ";
   std::cin >> panache;
   while(std::cin.get() != '\n')
      continue;
}

char * Singer::pv[Singer::Vtypes] = { "other", "alto", 
                                      "contralto", "soprano",
                                      "bass", "baritone",
                                      "tenor" };
void Singer::Set()
{
   std::cout << "Enter Singer's name: ";
   Worker::Get();
   Get();
}

void Singer::Show() const
{
   std::cout << "Category: Singer\n";
   Worker::Data();
   Data();
}

void Singer::Data() const
{
   std::cout << "Vocal range: " << pv[voice] << std::endl;
}

void Singer::Get()
{
   std::cout << "Enter number for singer's vocal range:\n";
   int i;
   for( i = 0; i != Vtypes; ++i )
   {
      std::cout << i << ": " << pv[i] << " ";
      if(i % 4 == 3)
         std::cout << std::endl;
   }
   if(i % 4 != 0)
      std::cout << '\n';
   while(std::cin.get() != '\n')
      continue;
}

void SingingWaiter::Data() const
{
   Singer::Data();
   Waiter::Data();
}

void SingingWaiter::Get()
{
   Waiter::Get();
   Singer::Get();
}

void SingingWaiter::Set()
{
   std::cout << "Enter Singing waitor's Name: ";
   Worker::Get();
   Get();
}

void SingingWaiter::Show() const
{
   std::cout << "Category: Singing Waitor\n";
   Worker::Data();
   Data();
}
