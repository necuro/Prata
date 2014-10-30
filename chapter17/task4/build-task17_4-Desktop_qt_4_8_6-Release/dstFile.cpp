include <iostream> #include <iostream>
#include <cstdlib> #include <cstdlib>
#include <fstream> #include <fstream>
 
using namespace std; using namespace std;
 
int main(int argc, char* argv[]) int main(int argc, char* argv[])
{ {
    if( argc == 1 )     ifstream srcFile(argv[1]);
    {     ofstream dstFile(argv[2]);
        cerr << "Error number of parametrs\n"; 
        exit(EXIT_FAILURE);     if(!srcFile.is_open() || !dstFile.is_open())
    }     {
    ofstream outFile(argv[1]);         cout << "Error open file\n";
    if(!outFile.is_open())         exit(EXIT_FAILURE);
    {     }
        cerr << "Error file open\n"; 
        exit(EXIT_FAILURE);     char ch;
    }     while(srcFile.get(ch))
         dstFile.put(ch);
    char ch; 
    while( (cin.get(ch)) )     srcFile.close();
    {     dstFile.close();
        outFile.put(ch); 
    } return 0;
    outFile.close(); }
 
return 0; 
} 
 
