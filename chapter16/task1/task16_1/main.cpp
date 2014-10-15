#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPolyndrom(const string&);

int main()
{
    string inpStr;
    cout << "Pl, Enter string:\n";
    getline(cin, inpStr);

    if( isPolyndrom(inpStr) )
    {
        cout << "Polyndrom\n";
    }
    else
        cout << "Not Polyndrom\n";

return 0;
}

bool isPolyndrom(const string & srcStr)
{
//String for copy of second half of string
    string tmpStr;

//Resize for Half of Source String
    tmpStr.resize(srcStr.size() / 2);

// Get iterator pointed at middle of Source String
    string::const_iterator mid = srcStr.begin() + srcStr.size()/2;

//Copy second half of source string and revesre values
    std::reverse_copy(mid , srcStr.end(), tmpStr.begin());

// Check if first half of source string and temp string is equal
    if( std::equal(srcStr.begin(), mid, tmpStr.begin()) )
        return true;

return false;
}

