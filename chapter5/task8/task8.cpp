#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    char sWords[80] {  };
    const char* breakWord { "done" };
    int wCounts { };
    cout << "Enter any word (\"done\" is string breaker)" << endl;
    while ( strcmp(sWords,breakWord) != 0)
    {
        cin >> sWords;
        wCounts++;
    }
    wCounts--;
    cout << "Total words: " << wCounts << endl;
   return 0;
}
