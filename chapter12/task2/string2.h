#ifndef _STRING2_H_
#define _STRING2_H_
#include <iostream>
   using std::istream;
   using std::ostream;

class String
{
private:
   char*		str;
   int			len;
   static int		numOfStrings;
   static const int	CINLIM = 80;
public:
   String(const char* s);
   String();
   String(const String& s);
   ~String();
   int length() const { return len; }
   void stringlow();
   void stringup();
   int has( const char );

   String& operator=(const char* );
   String& operator=(const String&);
   char& operator[](int i);
   const char& operator[](int i) const;
//   String operator+(const String&);

   friend bool operator>(const String&, const String&);
   friend bool operator<(const String&, const String&);
   friend bool operator==(const String&, const String&);
   friend ostream& operator<<(ostream&, const String&);
   friend istream& operator>>(istream&, String&);
   friend String operator+(const String& st1, const String& st2);

   static int HowMany();
};
#endif
