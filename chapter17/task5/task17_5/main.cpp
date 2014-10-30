#include <iostream>
#include <fstream>
#include <set>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    ifstream srcMat("mat.dat");
    ifstream srcPat("pat.dat");
    ofstream dstMP("matnmap.dat");
    if(!srcMat.is_open() && !srcPat.is_open() && !dstMP.is_open())
    {
        cout << "Error\n";
        exit(EXIT_FAILURE);
    }

    set<string> setMat;
    string strTmp;
    while(getline(srcMat, strTmp))
        setMat.insert(strTmp);
    set<string> setPat;
    while(getline(srcPat, strTmp))
        setPat.insert(strTmp);

    ostream_iterator<string> iterOut(cout, "\n");
    cout << "***Mat's guests:\n";
    std::copy(setMat.begin(), setMat.end(), iterOut);
    cout << "***Pat's guests:\n";
    std::copy(setPat.begin(), setPat.end(), iterOut);

    vector<string> setUnited(setMat.size() + setPat.size());
    vector<string>::iterator it;
    it = std::set_union(setMat.begin(), setMat.end(),
                   setPat.begin(), setPat.end(),
                   setUnited.begin());
    setUnited.resize(it - setUnited.begin());


    cout << "***United friends:\n";
    ostream_iterator<string> iterDstMP(dstMP, "\n");
    std::copy(setUnited.begin(), setUnited.end(), iterOut);
    std::copy(setUnited.begin(), setUnited.end(), iterDstMP);

    return 0;
}
