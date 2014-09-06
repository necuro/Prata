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
                    const std::string& surname = "") :
                    m_Name(name),
                    m_Surname(surname)
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
//   Gunslinger(): Person(), m_Patch(0) {}

   Gunslinger( const std::string& name = "",
               const std::string& surname = "",
               int patch = 0 ) :
               Person( name, surname ),
               m_Patch(patch) {}

   Gunslinger( const Person& p, int patch = 0 ) :
               Person(p), m_Patch(patch) {}

   double Draw() const; 
   void Show() const;
};

//
class PokerPlayer: virtual public Person
{
public:
   PokerPlayer( const std::string& name = "",
                const std::string& surname = "") :
                Person(name, surname) {}

   PokerPlayer( const Person& p ) :
                Person(p) {}

   int Draw() const;
   virtual void Show() const;
};

//
class BadDude: public Gunslinger, public PokerPlayer
{
public:
   BadDude(){}
   BadDude( const std::string& name,
            const std::string& surname,
            int patch ) :
            Person(name, surname),
            Gunslinger(name, surname, patch),
            PokerPlayer() {}

   BadDude( const Person& p, int patch = 0 ) :
            Person(p),
            Gunslinger(p, patch),
            PokerPlayer(p) {}

   BadDude( const Gunslinger& gn, int patch = 0 ):
            Person(gn),
            Gunslinger(gn, patch),
            PokerPlayer(gn) {}

   BadDude( const PokerPlayer& pp, int patch = 0 ) :
            Person(pp),
            Gunslinger(pp, patch),
            PokerPlayer(pp) {}

   double Gdraw() const;
   int Cdraw() const;
   virtual void Show() const;
};
#endif




















