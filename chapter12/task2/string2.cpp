#include <cstring>
#include <cctype>
#include "string2.h"
   using std::cout;

int String::numOfStrings = 0;

int String::HowMany()
{
   return numOfStrings;
}

String::String(const char* s )
{
   len = std::strlen(s);
   str = new char[len + 1] ;
   strcpy(str, s);
   numOfStrings++;
}

String::String()
{
   len = 4;
   str = new char[1];
   str[0]= '\0';
   numOfStrings++;
}

String::String(const String& st)
{
   len = st.len;
   str = new char[len + 1];
   std::strcpy(str, st.str);
   numOfStrings++;
}

String::~String()
{
   delete [] str;
   numOfStrings--;
}

String& String::operator=(const String& st)
{
   if(this == &st)
      return *this;

   delete [] str;
   len = st.len;
   str = new char[len + 1];
   std::strcpy(str, st.str);
   return *this;
}

String& String::operator=(const char* s)
{
   delete [] str;
   len = std::strlen(s);
   str = new char[len + 1];
   std::strcpy(str, s);
   return *this;
}

char& String::operator[](int i)
{
   return str[i];
}

const char& String::operator[](int i) const
{
   return str[i];
}

bool operator<(const String& st1, const String& st2)
{
   return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
   return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
   return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
   os << st.str;
   return os;
}

istream& operator>>(istream& is, String& st)
{
   char temp[String::CINLIM];
   is.get(temp, String::CINLIM);
   if(is)
      st = temp;
   while( is && is.get() != '\n' )
      continue;
   return is;
}

/*
String String::operator+(const String& st)
{
   String newVal;
   newVal.len = len + st.len;
   newVal.str = new char[newVal.len + 1];
   std::strcpy(newVal.str, str);
   std::strcat(newVal.str, st.str);
   return newVal;
}
*/

String operator+(const String& st1, const String& st2)
{
   String sum;
   sum.len = st1.len + st2.len;
   sum.str = new char [sum.len + 1];
   std::strcpy(sum.str, st1.str);
   std::strcat(sum.str, st2.str);
   return sum;
}

void String::stringlow()
{
   for( int i = 0; i != len; ++i )
   {
      if(std::isalpha(str[i]))
         str[i] = std::tolower(str[i]);
   }
}

void String::stringup()
{
   int i = 0;
   while(str[i])
   {
      if(std::isalpha(str[i]))
         str[i] = std::toupper(str[i]);
      i++;
   }

}

int String::has(const char ch)
{
   int i = 0;
   int counter = 0;
   while(str[i])
   {
      if(str[i] == ch) 
         ++counter;
      ++i;
   }
   return counter;
}


















