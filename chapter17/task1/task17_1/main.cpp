#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    const int LIM = 255;
    char str[LIM];
    while(true)
    {
    cout << "Enter string with $:" << endl;
    cin.get(str, LIM, '$');
    cout << "Here is your input:\n" << str << endl;
    cout << "You've read " << cin.gcount() << " characters\n";
    cout << "Last/First symblol: " << cin.get() << endl;
    while(cin.get() != '\n')
        continue;
    }

    return 0;
}

