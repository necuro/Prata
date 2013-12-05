#include <iostream> 

using namespace std; 

const int SLEN = 30; 

struct student
{ 
char fullname[SLEN]; 
char hobby[SLEN]; 
int ooplevel; 
}; 

int getinfo( student pa[], int );
void displayl(student st); 
void display2(const student* ps) ; 
void display3(const student pa[], int n) ; 

int main () 
{ 
   cout << "Enter class size: ";
   int class_size; 
   cin >> class_size; 
   while (cin.get() != '\n') 
      continue; 
   
   student * ptr_stu = new student[class_size]; 
   int entered = getinfo( ptr_stu, class_size );

for ( int i = 0; i < entered; i++ ) 
{ 
displayl (ptr_stu [i] ) ; 
display2(&ptr_stu[i]); 
} 
display3(ptr_stu, entered); 

   delete [] ptr_stu; 
   cout << "Done\n"; 
   return 0; 
} 

int getinfo( student pa[], int arrSize )
{
   int i = 0;
   for( i; i != arrSize; i++ )
   {
//Enter name of student
      cout << "!!!Input student number " << i + 1 << "!!!" << endl;
      cout << "Name: ";
      cin.getline( pa[i].fullname, SLEN - 1 );
      if( pa[i].fullname == "" )
      {
         return i;
      }
//Enter hobby
      cout << "Hobby: ";
      cin.getline( pa[i].hobby, SLEN - 1 );

//Enter oop level. By the way, my level == 0
      cout << "OOP level: ";
      cin >> pa[i].ooplevel;
      while(!cin)
      {
         cin.clear();
         while( cin.get() != '\n')
            continue;
         cout << "OOP level: ";
         cin >> pa[i].ooplevel;
      }
      cin.get();
   }

   return i;
}

void displayl(student st)
{
   cout << "!!!Student!!!(st)\n";
   cout << "Name: " << st.fullname << endl;
   cout << "Hobbi: " << st.hobby << endl;
   cout << "OOP level: " << st.ooplevel<< endl;
}

void display2(const student* ps)
{
   cout << "!!!Student!!!(ps)\n";
   cout << "Name: " << ps->fullname << endl;
   cout << "Hobbi: " << ps->hobby << endl;
   cout << "OOP level: " << ps->ooplevel<< endl;
}

void display3(const student pa[], int n)
{
   cout << "!!!Student!!!(pa)\n";
   for( int i = 0; i != n; i++ )
   {
   cout << "Name: " << pa[i].fullname << endl;
   cout << "Hobbi: " << pa[i].hobby << endl;
   cout << "OOP level: " << pa[i].ooplevel<< endl;
   }
}











