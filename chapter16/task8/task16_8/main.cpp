#include <iostream>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

void setSet(set<string>&);
void printSet(const set<string>&);

int main()
{
    cout << "Enter list of Met's friends!\n";
    set<string> setMet;
    setSet(setMet);

    cout << "Enter list of Pet's friends!\n";
    set<string> setPet;
    setSet(setPet);

    set<string> sharedFriends;
    sharedFriends = setMet;
    sharedFriends.insert(setPet.begin(), setPet.end());

    cout << "Met's friends\n";
    printSet(setPet);
    cout << "Pet's friends\n";
    printSet(setMet);
    cout << "Shared friends\n";
    printSet(sharedFriends);

return 0;
}

void setSet(set<string> & srcSet)
{
    cout << "Enter Name or 1983 for stop: ";
    string tmpStr;
    while( getline(cin,tmpStr) && (tmpStr != "1983") )
    {
        srcSet.insert(tmpStr);
        cout << "Enter Name or 1983 for stop: ";
    }
}

void printSet(const set<string> & srcSet)
{
    for(set<string>::const_iterator cit = srcSet.begin();
                                    cit != srcSet.end();
                                    ++cit)
        cout << "Friend: " << *cit << endl;
}
