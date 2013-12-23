#include <iostream>
#include <string>

void strcount(const std::string str);

int main()
{
    using namespace std;
    string input;
    char next;

    cout << "Enter a line:\n";
    getline( cin, input );
    while ( "" != input )
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline( cin, input );
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const std::string str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << str <<"\" contains ";
    while ( '\0' != str[count]  )               // go to end of string
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
