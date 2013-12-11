#include <iostream> 
#include <cstring> // для strlen(), strcpy

using namespace std; 

struct stringy
{ 
char * str; // указывает на строку 
int ct; // длина строки (не считая символа '\0') 
};

void set( stringy&, const char* );
void show( const stringy&, int rep = 1 );
void show( const char*, int rep = 1 );

int main () 
{ 
   stringy beany; 
   char testing [] = "Reality isn't what it used to be."; 
   set(beany, testing); // первым аргументом является ссылка, 
   // Выделяет пространство для хранения копии testing, 
   // использует элемент типа str структуры beany как указатель 
   // на новый блок, копирует testing в новый блок и 
   // создает элемент ct структуры beany 
   show(beany); // выводит строковый член структуры один раз 
   show (beany, 2); // выводит строковый член структуры два раза 
   testing[0] = 'D'; 
   testing[1] = 'u'; 
   show(testing); // выводит сроку testing один раз 
   show(testing, 3); // выводит строку testing три раза 
   show("Done!"); 

   return 0; 
} 

void set( stringy& stringyRef, const char* strVal )
{
   int size 			= strlen( strVal );
//   char* stringyRef.str		= new char[ size + 1 ];
   char* istr		= new char[ size ];
   stringyRef.str = istr;
   strcpy( stringyRef.str, strVal );
   stringyRef.ct = size;
}

void show( const stringy& stringyRef, int rep )
{
   for( int i = 0; i < rep; i++ )
   {
      cout << "Struct stringy:\n";
      cout << stringyRef.str << endl;
      cout << stringyRef.ct << endl;
  }
}


void show( const char* charPtr, int rep )
{
   for( int i = 0; i < rep; i++ )
   {
      cout << "Char array:\n";
      cout << charPtr << endl;
   }
}

