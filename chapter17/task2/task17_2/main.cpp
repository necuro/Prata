include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    if( argc == 1 )
    {
        cerr << "Error number of parametrs\n";
        exit(EXIT_FAILURE);
    }
    ofstream outFile(argv[1]);
    if(!outFile.is_open())
    {
        cerr << "Error file open\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    while( (cin.get(ch)) )
    {
        outFile.put(ch);
    }
    outFile.close();

return 0;
}

