#include <iostream>
#include <cstring>
#include "cow.h"
   using std::cout;
   using std::endl;

Cow::Cow()
{
   strcpy(name, "");
   hobby = new char[1];
   hobby[0] = '\0';
   weight = 0;
   cout << "Cow created\n";
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
   strcpy(name, nm);
   hobby = new char[strlen(ho) + 1];
   strcpy(hobby, ho);
   weight = wt;
   cout << "Cow created\n";
}

Cow::Cow(const Cow& c)
{
   strcpy(name, c.name);
   hobby = new char[strlen(c.hobby) + 1];
   strcpy(hobby, c.hobby);
   weight = c.weight;
   cout << "Cow created\n";
}

Cow::~Cow()
{
   delete [] hobby;
   cout << "Cow deleted\n";
}

Cow& Cow::operator=(const Cow& c)
{
   if(this == &c)
      return *this;
   delete [] hobby;
   hobby = new char[strlen(c.hobby) + 1];
   strcpy(hobby, c.hobby);
   weight = c.weight;
   cout << "Cow copied\n";
   return *this;
}

void Cow::ShowCow() const
{
   cout << "Name: " << name << endl;
   cout << "Hobby: " << hobby << endl;
   cout << "Weight: " << weight << endl;
   cout << endl;
}

