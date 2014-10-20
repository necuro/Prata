#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> Lotto( int size, int num );

int main()
{
    srand(time(NULL));
    int size;
    cout << "Enter size of vector: ";
    while (!(cin >> size))
    {
        cin.clear();
        while( cin.get() != '\n' )
            continue;
        cout << "Enter size of vector: ";
    }
    int num;
    cout << "Enter number of numbers:) : ";
    while (!(cin >> num) || (num > size ))
    {
        cin.clear();
        while( cin.get() != '\n' )
            continue;
        cout << "Enter number of numbers:) : ";
    }

    vector<int> iVec = Lotto(size, num);
    ostream_iterator<int> osit(cout, "\n");
    std::copy(iVec.begin(), iVec.end(), osit);

return 0;
}

vector<int> Lotto(int size, int num)
{
    vector<int> tmpVec(size);
    int counter = 0;
    for(vector<int>::iterator it = tmpVec.begin();
                              it != tmpVec.end();
                              ++it)
        *it = counter++;

    std::random_shuffle(tmpVec.begin(), tmpVec.end());
    tmpVec.resize(num);

return tmpVec;
}


