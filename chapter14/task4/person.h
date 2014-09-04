#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>

//Abstract class. Hold only Name and Surname
class Person
{
private:
   std::string	m_Name;
   std::string	m_Surname;

public:
   explicit Person( const std::string& name = "",
                    const string& surname = "") :
                    m_Name(name),
                    m_Surname = surname
                    {}

   virtual void Show() const;
   virtual ~Person() = 0;
};

//class derived from abstract Person with additional
class Gunslinger: virtual public Person
{
private:
   int		m_Patch;

public:
   Gunslinger(  )
   double Draw() const; 
   void Show() const;
};

//
class PokerPlayer: virtual public Person
{
public:
   int Draw() const;
};

//
class BadDude: public Gunslinger, public PokerPokerPlayer
{
public:
   Gdraw() const;
   Cdraw() const;
   virtual void Show() const;
};
#endif
