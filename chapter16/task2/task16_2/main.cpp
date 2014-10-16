#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool isPolyndrom(const string&);
string& allignString(string&);
string& reverseString(string&);

int main()
{
    cout << "Pl, Enter string:\n";
    string inpStr;
    getline(cin, inpStr);

    if(isPolyndrom(inpStr))
        cout << "Is Polyndrom\n";
    else
        cout << "Not Polyndrom\n";

return 0;
}

//Check if inputed string is polyndrom
bool isPolyndrom(const string & srcStr)
{
//Make copy of source string
    string tmpStr = srcStr;
//Remove from copy all not char or numeric symbols
    allignString(tmpStr);

//Create iterator which point to begin of the seconf half of string
//It depends from even or not string
    string::iterator itSecondHalfBegin;
    if( tmpStr.size() % 2 == 0 )
        itSecondHalfBegin = tmpStr.begin() + tmpStr.size()/2;
    else
        itSecondHalfBegin = tmpStr.begin() + tmpStr.size()/2 + 1;

//Create string from second half of cleared source strind
    string secondHalfStr(itSecondHalfBegin, tmpStr.end());
//And reverse it
    reverseString(secondHalfStr);

//Checking if reversed second part equal first part of source cleared string
    if(string(tmpStr.begin(), tmpStr.begin() + tmpStr.size()/2) == secondHalfStr)
        return true;

return false;
}

//Remove from string not alpha or numeric chars
//and make it lowercase
string& allignString(string& srcStr)
{
    string tmpStr;
    for(string::iterator it = srcStr.begin();
                         it != srcStr.end();
                         ++it)
        if( std::isalnum(*it) )
            tmpStr += std::tolower(*it);
    srcStr = tmpStr;

return srcStr;
}

//Reverse inputed string
string& reverseString(string & srcStr)
{
    string tmpStr;
    for(string::reverse_iterator rit = srcStr.rbegin();
                                 rit != srcStr.rend();
                                 ++rit)
        tmpStr += *rit;
    srcStr = tmpStr;

return srcStr;
}
