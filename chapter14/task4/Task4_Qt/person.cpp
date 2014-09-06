#include "person.h"
#include <cstdio>
#include <ctime>
#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

void Person::Show() const
{
   cout << "Name: " << m_Name << endl;
   cout << "Surname: " << m_Surname << endl;
}

Person::~Person()
{}

double Gunslinger::Draw() const
{
   srand(time(NULL));
return rand() % 60 + 1;
}

void Gunslinger::Show() const
{
   Person::Show();
   cout << "Number of Patches: " << m_Patch << endl;
   cout << "Ready in : " << Draw() 
        << " seconds"<< endl; 
}

int PokerPlayer::Draw() const
{
   srand(time(NULL));
return rand() % 52 + 1;
}

void PokerPlayer::Show() const
{
   Person::Show();
   cout << "Card: " << Draw() << endl;
}

double BadDude::Gdraw() const
{
return  Gunslinger::Draw();
}

int BadDude::Cdraw() const
{
return PokerPlayer::Draw();
}

void BadDude::Show() const
{
   Person::Show();
   cout << "Ready in : " << Gdraw() << "Seconds" << endl;
   cout << "Next card is: " <<Cdraw() << endl;
}
