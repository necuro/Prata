#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

template <class T>
int reduce(T ar[], int n);

template <class T>
void printArray(T ar[], int n);

int main()
{
//For long
    vector<long> lVec;
    cout << "Pl, fill array of long(q for stop):\n";
    int i = 0;
    long lTmpVal;
    cout << "[" << i << "]: ";
    while( cin >> lTmpVal )
    {
        ++i;
        lVec.push_back(lTmpVal);
        cout << "[" << i << "]: ";
    }

//initialize arr by values from vector
    long* arr = new long[lVec.size()];
    arr = &lVec[0];

//Clear cin
    cin.clear();
    while(cin.get() != '\n')
        continue;

//For string
    vector<string> sVec;
    cout << "Pl, fill array of string(1983 for stop):\n";
    i = 0;
    string sTmpVal;
    cout << "[" << i << "]: ";
    while( (cin >> sTmpVal) && (sTmpVal != "1983") )
    {
        ++i;
        sVec.push_back(sTmpVal);
        cout << "[" << i << "]: ";
    }

//initialize arr by values from vector
    string* sarr = new string[sVec.size()];
    sarr = &sVec[0];

//Updating arr in order to task
    int newSize = reduce(arr, lVec.size());
    cout << "New number of elements n array of long: "
         << newSize << endl;
    printArray(arr, newSize);

//Updating sarr in order to task
    newSize = reduce(sarr, sVec.size());
    cout << "New number of elements n array of string: "
         << newSize << endl;
    printArray(sarr, newSize);
//Don't use delete [] arr because
//arr poit to vector wich delete
//automaticaly it own values
return 0;
}

//Print array:)
template <class T>
void printArray(T ar[], int n)
{
    for(int i = 0; i != n; ++i)
        cout << "arr[" << i << "] = "
             << ar[i] << endl;
}

//Task
template <class T>
int reduce(T ar[], int n)
{
// Sort values
    std::sort(ar, ar + n);

//Get iterator to end uniq elements
    T* it = std::unique(ar, ar + n);

    //It works!!!
//Copy uniq values to itself!!!
    std::copy(ar, it, ar);

//Just for get size of uniq array
    vector<T> tmpVec(ar, it);

return tmpVec.size();
}
