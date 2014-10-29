#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream srcFile(argv[1]);
    ofstream dstFile(argv[2]);

    if(!srcFile.is_open() || !dstFile.is_open())
    {
        cout << "Error open file\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    while(srcFile.get(ch))
        dstFile.put(ch);

    srcFile.close();
    dstFile.close();

return 0;
}

