#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <new>
#include <cstring>

const int BUF = 48;
char buffer[BUF];
const int N = 2;

struct chaff
{
   char		dross[20];
   int		slag;
};

int main()
{
   chaff* cf1 = new (buffer) chaff[N];
   chaff* cf2 = new chaff[N];
   char* ch[] = { "qwerty", "asdfgh"};


   for( int i = 0; i < N; i++ ) 
   { 
      strcpy(cf1[i].dross, ch[i]);
      cf1[i].slag = i;
      strcpy(cf2[i].dross, ch[i]);
      cf2[i].slag = i;
   }

   for( int i = 0; i < N; i++ )
   {
      cout << "buffered value:\n";
      cout << "dross: " << cf1[i].dross << endl;
      cout << "slag: " << cf1[i].slag << endl;
      cout << "Unbuffered value:\n";
      cout << "dross: " << cf2[i].dross << endl;
      cout << "slag: " << cf2[i].slag << endl;
   }

}
