#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int reduce(long ar[], int n);
void printArray(long ar[], int n);

int main()
{
    vector<long> lVec;
    cout << "Pl, fill array of long(q for stop):\n";
    int i = 0;
    long tmpVal;
    cout << "[" << i << "]: ";
    while( cin >> tmpVal )
    {
        ++i;
        lVec.push_back(tmpVal);
        cout << "[" << i << "]: ";
    }

//initialize arr by values from vector
    long* arr = new long[lVec.size()];
    arr = &lVec[0];

//Updating arr in order to task
    int newSize = reduce(arr, lVec.size());
    cout << "New number of elements: "
         << newSize << endl;
    printArray(arr, newSize);
//Don't use delete [] arr because
//arr poit to vector wich delete
//automaticaly it own values
return 0;
}

//Print array:)
void printArray(long ar[], int n)
{
    for(int i = 0; i != n; ++i)
        cout << "arr[" << i << "] = "
             << ar[i] << endl;
}

//Task
int reduce(long ar[], int n)
{
// Sort values
    std::sort(ar, ar + n);

//Get iterator to end uniq elements
    long* it = std::unique(ar, ar + n);

    //It works!!!
//Copy uniq values to itself!!!
    std::copy(ar, it, ar);

//Just for get size of uniq array
    vector<int> tmpVec(ar, it);

return tmpVec.size();
}
