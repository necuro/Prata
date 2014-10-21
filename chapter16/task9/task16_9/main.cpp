#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    srand(time(NULL));

//30 000 000
    const int SIZE = 30000000;

    vector<int> vi0(SIZE);
    for(vector<int>::iterator it = vi0.begin();
                              it != vi0.end();
                              ++it)
        *it = rand() % 1000 + 1;

    vector<int> vi(vi0.begin(), vi0.end());
    list<int> li(vi0.begin(), vi0.end());

//Using STL sort for vector
    clock_t start = clock();
    std::sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout << "Using STL sort for vector:\n";
    cout << (double)(end - start)/CLOCKS_PER_SEC << endl;

//Using member of std::list<int> sort
    start = clock();
    li.sort();
    end = clock();
    cout << "Using member of std::list<int> sort:\n";
    cout << (double)(end - start)/CLOCKS_PER_SEC << endl;

//Using copy to vector, sorting and copy back to the list
    li.assign(vi0.begin(),vi0.end());
    start = clock();
    vi.assign(li.begin(), li.end());
    sort(vi.begin(), vi.end());
    li.assign(vi.begin(), vi.end());
    end = clock();
    cout << "Using copy to vector, sorting and copy back to the list:\n";
    cout << (double)(end - start)/CLOCKS_PER_SEC << endl;

return 0;
}

