#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;
const int LIMIT = 255;

int main()
{
    ifstream srcFile1("task17_2.cpp");
    ifstream srcFile2("task17_3.cpp");
    ofstream dstFile("dstFile.cpp");
    if( !srcFile1.is_open() || !srcFile2.is_open() || !dstFile.is_open() )
    {
        cout << "Error open file\n";
        exit(EXIT_FAILURE);
    }

    char s1[LIMIT];
    char s2[LIMIT];
    string str1;
    string str2;

    bool r1, r2;

    if (srcFile1.getline(s1, LIMIT))
        r1 = true;
    else
        r1 = false;

    if (srcFile2.getline(s2, LIMIT))
        r2 = true;
    else
        r2 = false;


    while( r1 || r2 )
    {
        str1 = s1;
        str2 = s2;
        cout << "S1\n" << str1;
        cout << "S2\n" << str2;
//        cout << "\n";
        str1 +=" ";
        str1 +=str2;
        dstFile << str1.c_str();
        dstFile << "\n";

        if (srcFile1.getline(s1, LIMIT))
            r1 = true;
        else
            r1 = false;

        if (srcFile2.getline(s2, LIMIT))
            r2 = true;
        else
            r2 = false;
    }

    srcFile1.close();
    srcFile2.close();
    dstFile.close();

    return 0;
}

